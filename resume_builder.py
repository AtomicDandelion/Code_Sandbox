from mailmerge import MailMerge

# FULL path to template with mailmerge fields
template = "[TEMPLATE_NAME].docx"

# These strings tailor the experience within the resume towards a specific field in the career statement section
cyber_string = "[CYBER_PITCH]"
sw_string = "[SW_PITCH]"


# Fill the array as much as needed, ensure all var arrays are same length
var_position=['Position 1','Position 2']
var_company=['Company 1','Company 2']
var_next_position=[cyber_string,sw_string]

if (len(var_position) == len(var_company) and len(var_position) == len(var_next_position)):
	for x in range(len(var_position)):
		document = MailMerge(template)
		document.merge(
			Position=var_position[x],
			Company=var_company[x],
			Next=var_next_position[x]
		)
		document.write('['+var_position[x]+'-'+var_company[x]+']name-year.docx')
		print("Resume", (x+1),"of",len(var_position), "created")
else:
	print("Var array lengths NOT EQUAL, please inspect and modify accordingly!")
