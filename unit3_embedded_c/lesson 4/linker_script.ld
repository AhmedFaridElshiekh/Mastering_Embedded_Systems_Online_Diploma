MEMORY
{
	flash(rx) : ORIGIN =0x00000000, LENGTH =512M
	sram(rwx) : ORIGIN =0x20000000, LENGTH =512M
}
SECTIONS
{
	.text :
	{
		*(.vectors*)
		*(.text*)
		_E_text = .; 
	}>flash
	.data :
	{
		_S_DATA = .;
		*(.data)
		_E_DATA = .;
		. = ALIGN(4);
		

	}> sram AT>flash
	.rodata :
	{
		*(.rodata)
	}> flash
	.bss :
	{
		_S_bss = .;
		*(.bss)
		_E_bss = .;
		. = ALIGN(4);
	}>sram
	
}