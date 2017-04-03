class
	EWF_APP_EXECUTION

inherit
	WSF_EXECUTION

create
	make

feature {NONE} -- Initialization


feature -- Execution

	execute
			-- Use `request' to get data for the incoming http request
			-- and `response' to send response back to the client
		local
			login: WSF_FILE_RESPONSE
			start: WSF_FILE_RESPONSE
			form: WSF_FILE_RESPONSE
			well_done: WSF_FILE_RESPONSE
		do
			create form.make_html("form.html")
			create start.make_html ("start.html")
			create well_done.make_html ("well_done.html")
			create login.make_html ("login.html")
			if request.path_info.same_string ("/") then
				response.send (start)
			end
			if request.path_info.same_string ("/start.html") then
				response.send (start)
			end
			if request.path_info.same_string ("/form.html") then
				response.send (form)
			end
			if request.path_info.same_string ("/login.html") then
				response.send (login)
			end
			if request.path_info.same_string ("/well_done.html") then
				response.send (well_done)
			end
		end

end
