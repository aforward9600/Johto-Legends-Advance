BlackthornCity_MapScripts::
	.byte 0

BlackthornCity_EventScript_Youngster::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_EXP_SHARE, BlackthornCity_EventScript_Youngster_AfterExpShare
	goto_if_set FLAG_SYS_POKEMON_GET, BlackthornCity_EventScript_Youngster_GetExpShare
	msgbox BlackthornCity_EventScript_Youngster_Text_ManImJealous, MSGBOX_DEFAULT
	closemessage
	release
	end

BlackthornCity_EventScript_Youngster_GetExpShare::
	msgbox BlackthornCity_EventScript_Youngster_Text_HeresAnExpShare, MSGBOX_DEFAULT
	giveitem ITEM_EXP_SHARE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_EXP_SHARE
	msgbox BlackthornCity_EventScript_Youngster_Text_ThatsExpShare, MSGBOX_DEFAULT
	closemessage
	release
	end

BlackthornCity_EventScript_Youngster_AfterExpShare::
	msgbox BlackthornCity_EventScript_Youngster_Text_HowsTheExpShare, MSGBOX_DEFAULT
	closemessage
	release
	end

BlackthornCity_EventScript_Youngster_Text_ManImJealous:
	.string "Yo, {PLAYER}!\p"
	.string "Today's the day, huh? Man, I'm jealous.\l"
	.string "Maybe someday the Master will see me as\n"
	.string "being worthy.$"

BlackthornCity_EventScript_Youngster_Text_HeresAnExpShare:
	.string "Yo, {PLAYER}!\p"
	.string "You got your Pokémon huh? Man,\n"
	.string "I'm jealous.\p"
	.string "I might as well give you this, since I\n"
	.string "won't need it now.$"

BlackthornCity_EventScript_Youngster_Text_ThatsExpShare:
	.string "That's an Exp. Share!\p"
	.string "You can use it to give experience to\n"
	.string "Pokémon that aren't battling!\p"
	.string "Just use it, and watch the experience\n"
	.string "roll in!$"

BlackthornCity_EventScript_Youngster_Text_HowsTheExpShare:
	.string "How's that Exp. Share treating ya?\p"
	.string "I'm going to want it back some day.\p"
	.string "I'm going to be a trainer eventually,\n"
	.string "after all!$"
