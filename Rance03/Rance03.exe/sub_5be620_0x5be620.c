// 函数: sub_5be620
// 地址: 0x5be620
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* edx = *(arg2 + 4)
void* result

if (&edx[4] u> *(arg2 + 8))
label_5be6be:
    result.b = 0
    return result

int32_t ebx_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(arg2 + 4) = &edx[4]

if (ebx_7 != 0)
    void* var_1c_1 = arg2
    void* var_20_1 = arg1
    sub_5bbed0(*(arg1 + 0x9c), *(arg1 + 0xa0))
    *(arg1 + 0xa0) = *(arg1 + 0x9c)
    sub_5bbc70(arg1 + 0x9c, ebx_7)
    int32_t esi_2 = 0
    
    if (ebx_7 s> 0)
        int32_t edi_1 = 0
        
        do
            if (sub_5bbac0(*(arg1 + 0x9c) + edi_1, arg2).b == 0)
                goto label_5be6be
            
            esi_2 += 1
            edi_1 += 0x28
        while (esi_2 s< ebx_7)

result.b = 1
return result
