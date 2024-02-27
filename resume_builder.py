from mailmerge import MailMerge

# FULL path to template with mailmerge fields
template = "[TEMPLATE_NAME].docx"

# These strings tailor the experience within the resume towards a specific field in the career statement section
sw_string = "[SW_PITCH]"
cyber_string = "[CYBER_PITCH]"

# repeat this part as needed-----------------------------------------
document = MailMerge(template)
document.merge(
	Position='[INSERT_POSITION_TITLE]',
	Company='[INSERT_COMPANY_NAME',
	Next=sw_string
)
# Edit the below line for the name of the output file/resume
document.write('[Position1-Company1]name-year.docx')
print("First resume created")
# end repeat --------------------------------------------------------

document = MailMerge(template)
document.merge(
	Position='[INSERT_POSITION_TITLE]',
	Company='[INSERT_COMPANY_NAME',
	Next=cyber_string
)
# Edit the below line for the name of the output file/resume
document.write('[Position2-Company2]name-year.docx')
print("Second resume created")

document = MailMerge(template)
document.merge(
	Position='[INSERT_POSITION_TITLE]',
	Company='[INSERT_COMPANY_NAME',
	Next=sw_string
)
# Edit the below line for the name of the output file/resume
document.write('[Position3-Company3]name-year.docx')
print("Third resume created")