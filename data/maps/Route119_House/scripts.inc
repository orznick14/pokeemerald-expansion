Route119_House_MapScripts::
	.byte 0

Route119_House_EventScript_Woman::
	msgbox Route119_House_Text_RumorAboutCaveOfOrigin, MSGBOX_NPC
	end

Route119_House_EventScript_Wingull::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
	msgbox Route119_House_Text_Wingull, MSGBOX_DEFAULT
	waitmoncry
	release
	end

<<<<<<< HEAD
Route119_House_Text_RumorAboutCaveOfOrigin:
	.string "I heard about a cave called the CAVE\n"
	.string "OF ORIGIN.\p"
=======
Route119_House_Text_RumorAboutCaveOfOrigin: @ 8270982
	.string "I heard about a cave called the Cave\n"
	.string "Of Origin.\p"
>>>>>>> 4d1bf9605eadf3149434efea17932b2dcfa12b24
	.string "People rumor that the spirits of\n"
	.string "Pokémon are revived there. Could\l"
	.string "something like that really happen?$"

<<<<<<< HEAD
Route119_House_Text_Wingull:
	.string "WINGULL: Pihyoh!$"
=======
Route119_House_Text_Wingull: @ 8270A17
	.string "Wingull: Pihyoh!$"
>>>>>>> 4d1bf9605eadf3149434efea17932b2dcfa12b24

