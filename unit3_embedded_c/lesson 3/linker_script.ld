MEMORY
{
	flash(rx) : ORIGIN =0x08000000, LENGTH =128k
	sram(rwx) : ORIGIN =0x20000000, LENGTH =20k
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
		. = .+ 0x1000;
		_stack_top = .;
	}>sram
	
}