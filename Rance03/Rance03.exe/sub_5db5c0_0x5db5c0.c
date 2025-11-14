// 函数: sub_5db5c0
// 地址: 0x5db5c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_14 = arg2
int32_t* var_18 = arg1
sub_5bf850(*arg1, arg1[1])
arg1[1] = *arg1
char* edx_1 = *(arg2 + 4)
uint32_t result

if (&edx_1[4] u> *(arg2 + 8))
label_5db647:
    result.b = 0
    return result

uint32_t edi_7 = ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
*(arg2 + 4) = &edx_1[4]

if (edi_7 s> 0)
    sub_5db650(arg1, edi_7)
    int32_t esi_1 = 0
    
    if (edi_7 s> 0)
        int32_t ebx_1 = 0
        
        do
            if (sub_5db4a0(*arg1 + ebx_1, arg2).b == 0)
                goto label_5db647
            
            esi_1 += 1
            ebx_1 += 0x2c
        while (esi_1 s< edi_7)

result.b = 1
return result
