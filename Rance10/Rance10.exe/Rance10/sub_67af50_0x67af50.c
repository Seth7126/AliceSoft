// 函数: sub_67af50
// 地址: 0x67af50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = (*arg1[1])(arg1, 1, arg2 << 5)
*ebx = 0
ebx[1] = 0x1f
ebx[2] = 0
ebx[3] = 0x3f
ebx[4] = 0
ebx[5] = 0x1f
int32_t* eax_4
int32_t ecx_1
eax_4, ecx_1 = sub_67a820(arg1, ebx)
int32_t var_14_1 = arg2
int32_t eax_5 = sub_67ac60(eax_4, ebx, arg1, ecx_1)
int32_t edi_1 = eax_5
char* esi_1 = nullptr

if (edi_1 s> 0)
    do
        eax_5 = sub_67add0(eax_5, ebx, arg1, esi_1)
        esi_1 = &esi_1[1]
        ebx = &ebx[8]
    while (esi_1 s< edi_1)

void* eax_6 = *arg1
arg1[0x1c] = edi_1
*(eax_6 + 0x14) = 0x62
*(*arg1 + 0x18) = edi_1
return (*(*arg1 + 4))(arg1, 1)
