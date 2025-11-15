// 函数: ??$_Copy_unchecked1@PADV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@YA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@0@PAD0V10@U_General_ptr_iterator_tag@0@@Z
// 地址: 0x6e3717
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi = arg3
int32_t ebx = 0
int32_t var_10 = arg1
void* edi_2 = not.d(sbb.d(arg1, arg1, arg4 u< esi)) & (arg4 - esi)
int32_t arg_10

if (edi_2 != 0)
    do
        std::ostreambuf_iterator<char,struct std::char_traits<char> >::operator=(&arg_10, *esi)
        esi = &esi[1]
        ebx += 1
    while (ebx != edi_2)

*arg2 = arg_10
arg2[1] = arg5
return arg2
