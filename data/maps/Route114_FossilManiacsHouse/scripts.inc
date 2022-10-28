Route114_FossilManiacsHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsHouse_OnTransition
	.byte 0

Route114_FossilManiacsHouse_OnTransition:
	setflag FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE
	end

Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM28, Route114_FossilManiacsHouse_EventScript_ReceivedDig
	msgbox Route114_FossilManiacsHouse_Text_HaveThisToDigLikeMyBrother, MSGBOX_DEFAULT
	giveitem ITEM_TM28
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM28
	release
	end

Route114_FossilManiacsHouse_EventScript_ReceivedDig::
	msgbox Route114_FossilManiacsHouse_Text_DigReturnsYouToEntrance, MSGBOX_DEFAULT
	release
	end

Route114_FossilManiacsHouse_EventScript_RockDisplay::
	msgbox Route114_FossilManiacsHouse_Text_RocksFillDisplayCase, MSGBOX_SIGN
	end

Route114_FossilManiacsHouse_EventScript_Bookshelf::
	msgbox Route114_FossilManiacsHouse_Text_CrammedWithBooks, MSGBOX_SIGN
	end

<<<<<<< HEAD
Route114_FossilManiacsHouse_Text_HaveThisToDigLikeMyBrother:
	.string "My big brother's the FOSSIL MANIAC…\n"
	.string "He's a nice guy who loves FOSSILS…\p"
=======
Route114_FossilManiacsHouse_Text_HaveThisToDigLikeMyBrother: @ 822AD85
	.string "My big brother's the Fossil Maniac…\n"
	.string "He's a nice guy who loves Fossils…\p"
>>>>>>> 4d1bf9605eadf3149434efea17932b2dcfa12b24
	.string "He loves digging holes, too…\n"
	.string "He dug this hole by himself…\p"
	.string "You can have this, so you can Dig\n"
	.string "holes just like my big brother…$"

<<<<<<< HEAD
Route114_FossilManiacsHouse_Text_DigReturnsYouToEntrance:
	.string "If you make a POKéMON DIG inside a\n"
=======
Route114_FossilManiacsHouse_Text_DigReturnsYouToEntrance: @ 822AE48
	.string "If you make a Pokémon Dig inside a\n"
>>>>>>> 4d1bf9605eadf3149434efea17932b2dcfa12b24
	.string "cave, you're returned to the entrance…$"

Route114_FossilManiacsHouse_Text_RocksFillDisplayCase:
	.string "Rocks in peculiar shapes fill\n"
	.string "the display case…$"

<<<<<<< HEAD
Route114_FossilManiacsHouse_Text_CrammedWithBooks:
	.string "THE COMPOSITION OF STRATA…\n"
	.string "HOW RAIN SHAPES THE LAND…\l"
	.string "STONES, SOIL, AND ROCK…\p"
=======
Route114_FossilManiacsHouse_Text_CrammedWithBooks: @ 822AEC2
	.string "The Composition Of Strata…\n"
	.string "How Rain Shapes The Land…\l"
	.string "Stones, Soil, and Rock…\p"
>>>>>>> 4d1bf9605eadf3149434efea17932b2dcfa12b24
	.string "It's crammed with books.$"

