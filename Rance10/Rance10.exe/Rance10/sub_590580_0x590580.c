// 函数: sub_590580
// 地址: 0x590580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg2
void* edi = arg1 + 0x28
void* var_4 = edi
*(arg1 + 0x24) = *(esi + 8)
int32_t eax_1
int32_t edx_2
edx_2:eax_1 = muls.dp.d(0x2e8ba2e9, *(esi + 0x10) - *(esi + 0xc))
int32_t edx_3 = edx_2 s>> 3
int32_t i_2 = (edx_3 u>> 0x1f) + edx_3
int32_t i_1 = i_2
sub_592260(edi, i_2)

if (i_2 s> 0)
    int32_t ebx_2 = 0
    int32_t ebp_1 = 0
    int32_t i
    
    do
        char* edi_2 = *edi + ebp_1
        void** esi_2 = *(esi + 0xc) + ebx_2
        
        if (edi_2 != esi_2)
            sub_403590(edi_2, esi_2, 0, 0xffffffff)
        
        *(edi_2 + 0x18) = esi_2[6]
        *(edi_2 + 0x1c) = esi_2[7]
        sub_5682d0(&edi_2[0x24], &esi_2[8])
        esi = arg2
        ebp_1 += 0x30
        edi = var_4
        ebx_2 += 0x2c
        i = i_1
        i_1 -= 1
    while (i != 1)

char* result
result.b = 1
return result
