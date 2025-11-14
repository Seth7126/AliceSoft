// 函数: sub_4917b0
// 地址: 0x4917b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
void* result = arg1 + 0x10
*(arg1 + 8) = 0xffffffff
*(arg1 + 0xc) = 0
bool cond:0 = *(result + 0x14) u< 0x10
*(result + 0x10) = 0

if (not(cond:0))
    result = *result

*result = 0

while (true)
    char* edi_1 = *(arg2 + 4)
    int32_t ebx_1 = *(arg2 + 8)
    
    if (&edi_1[4] u<= ebx_1)
        result = ((zx.d(edi_1[3]) << 8 | zx.d(edi_1[2])) << 8 | zx.d(edi_1[1])) << 8 | zx.d(*edi_1)
        *(arg2 + 4) = &edi_1[4]
        
        if (result == 0)
            break
        
        if (result != 1)
            if (result == 2)
                *(arg1 + 0xc) = 1
                continue
            else if (result != 3)
                continue
            else if (&edi_1[8] u<= ebx_1)
                uint32_t eax_11 = zx.d(edi_1[4])
                    | ((zx.d(edi_1[7]) << 8 | zx.d(edi_1[6])) << 8 | zx.d(edi_1[5])) << 8
                *(arg2 + 4) = &edi_1[8]
                
                if (sub_468c20(arg2, arg1 + 0x10, (eax_11 + 3) & 0xfffffffc).b != 0)
                    continue
        else if (&edi_1[8] u<= ebx_1)
            *(arg1 + 8) =
                ((zx.d(edi_1[7]) << 8 | zx.d(edi_1[6])) << 8 | zx.d(edi_1[5])) << 8 | zx.d(edi_1[4])
            *(arg2 + 4) += 4
            continue
    
    result.b = 0
    return result

result.b = 1
return result
