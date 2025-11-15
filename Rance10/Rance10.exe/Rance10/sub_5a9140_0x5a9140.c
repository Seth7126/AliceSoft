// 函数: sub_5a9140
// 地址: 0x5a9140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebp = arg1 + 0x28
int32_t** esi = *ebp
uint32_t ebx_3 = (*(arg1 + 0x2c) - esi + 3) u>> 2
int32_t edi = 0

if (esi u> *(ebp + 4))
    ebx_3 = 0

if (ebx_3 != 0)
    do
        sub_57bb80(*esi, ebp)
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

int32_t* esi_1 = *ebp
int32_t edi_1 = *(ebp + 4)

if (esi_1 != edi_1)
    float ebx_4 = arg4
    
    do
        char eax_3
        int32_t ecx_2
        eax_3, ecx_2 = sub_59f500(ebx_4, *(*esi_1 + 0xc), sub_579530)
        arg4.b = eax_3
        int32_t var_34_1 = ecx_2
        int32_t var_54_1 = ecx_2
        
        if (sub_57bc00(*esi_1, arg4, arg3, ebx_4, arg2, arg5, arg6, arg7, arg8, &data_7e70ec, 
                &data_7e7128, &data_7fd4f4, 1f, arg9, arg1 + 0x34, arg1 + 0x48, arg10, arg11, arg12) == 0)
            return 0
        
        esi_1 = &esi_1[1]
    while (esi_1 != edi_1)

return 1
