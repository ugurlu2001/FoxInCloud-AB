* {fr} FoxInCloud constants
* ====================

&& {en} To step back to previous MAJOR or MINOR version (does not apply to patches):
&& {fr} Pour revenir � la version MAJEURE ou MINEURE pr�c�dente (ne s'applique pas aux correctifs) :
&& 1- modify file awPublic_override.h:
&& {en} 2- add these lines (uncommented):
&& {fr} 2- ajouter ces lignes (sans commentaire) :
#IFNDEF	PREVIOUS_FIC_VERSION
*!*	#DEFINE	PREVIOUS_FIC_VERSION
#ENDIF
&& {en} 3- make sure you run VFP / FiC studio as an Administrator
&& {fr} 3- assurez-vous d'ex�cuter VFP / FiC studio en tant qu'Administrateur
&& {en} 4- compile project:
&& {fr} 4- compiler le projet :
* do atPJcompile with 'PREVIOUS_FIC_VERSION'

#DEFINE wMESSAGEBOX_CLASS		awFrmMB
&& {fr} Classe de formulaire de MessageBox()
&& {fr} Utilis� en dehors du contexte d'un formulaire
&& {fr} cf. awPublic.prg!wMessageBox()
&& {en} MessageBox() form class
&& {en} Used outside of a form
&& {en} see awPublic.prg!wMessageBox()

#DEFINE wINPUTBOX_CLASS			awFrmIB
&& {fr} Classe de formulaire de InputBox()
&& {fr} Utilis� en dehors du contexte d'un formulaire
&& {fr} cf. awPublic.prg!wInputBox()
&& {en} InputBox() form class
&& {en} Used outside of a form
&& {en} see awPublic.prg!wInputBox()

#DEFINE wGETCOLOR_CLASS			awFrmGC
&& {fr} Classe de formulaire de GetColor()
&& {fr} Utilis� en dehors du contexte d'un formulaire
&& {fr} cf. awPublic.prg!wGetColor()
&& {en} GetColor() form class
&& {en} Used outside of a form
&& {en} see awPublic.prg!wGetColor()

#DEFINE wGETPICT_CLASS			awFrmGP
&& {fr} Classe de formulaire de GetPict()
&& {fr} Utilis� en dehors du contexte d'un formulaire
&& {fr} cf. awPublic.prg!wGetPict()
&& {en} GetPict() form class
&& {en} Used outside of a form
&& {en} see awPublic.prg!wGetPict()

#DEFINE wGETFILE_CLASS			awFrmGF
&& {fr} Classe de formulaire de GetFile()
&& {fr} Utilis� en dehors du contexte d'un formulaire
&& {fr} cf. awPublic.prg!wGetFile()
&& {en} GetFile() form class
&& {en} Used outside of a form
&& {en} see awPublic.prg!wGetFile()

* =======================================================
#IF File('awPublic_override.h')
	#INCLUDE awPublic_override.h
#ENDIF
* =======================================================
&& {fr} Surcharge pour l'application FoxInCloud
&& {fr} awPublic_override.h n'est jamais remplac� lors des mises � jour FoxInCloud
&& {en} Overload(s) for FoxInCloud Application
&& {en} awPublic_override.h is never replaced when FoxInCloud is updated



&& {fr} FoxInCloud development
#IF File('awPublic_override_ab.h')
	#INCLUDE awPublic_override_ab.h
#ENDIF