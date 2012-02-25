require 'rubygems'
require 'Mechanize'

class ManBot

	def initialize
		@agent = Mechanize.new
		@page = @agent.get 'http://m.adam4adam.com'
	end

	def login(name, pass)
		puts 'Logged in...'
		form = @page.forms.first
		form.username = name
		form.password = pass
		@page = @agent.submit form
	end

	def MenuSelect
		puts 'Getting Online Members...'
		@page = @agent.page.link_with(:text => 'Members Online').click
		@page = @agent.page.link_with(:text => /Southern CA San Diego/).click
	end

	def stalk
		list = []
		@page.links.each do |item|
			list << item.text
		end
		puts @page.uri
		num = ((list.index "\xC2\xBB") + 1)
		@page = @agent.get(@page.links[num].href)
		
		begin
			loop do
				@page = @agent.page.link_with(:text => /Next*/).click
				puts (@page.uri.to_s.split '=').last
			end
		rescue
			puts "Ran Out of People!"
		end
	end

end

name = "cookielover"
pass = "pw2begin"
page = ManBot.new
page.login(name, pass)
page.MenuSelect
page.stalk
puts 'Done!'
