* Los procesos pueden asignarse a grupos, mediante la llamada al sistem:
	$\text{int setpid(pid\_t, pid, pit\_ pgid)}$
*  Con las siguientes reglas:
	* Solo puede cambiar el id de grupo o el de algún hijo
	* Un proceso lider de seción no puede cambiar el id de su grupo
	* Si se cambia el id de grupo de un proceso, el líder del nuevo grupo tiene que estar en la misma sesión que el proceso
 * Un proceso que invoque setpgid(0, 0) se covierte en lider de su propio grupo con el id del proceso