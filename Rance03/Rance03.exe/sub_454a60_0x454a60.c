// 函数: sub_454a60
// 地址: 0x454a60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
char* edx = *(arg2 + 4)
void* result

if (&edx[4] u<= *(arg2 + 8))
    uint32_t esi_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) = &edx[4]
    
    if (&edx[8] u<= *(arg2 + 8))
        *(arg1 + 8) = ((zx.d(edx[7]) << 8 | zx.d(edx[6])) << 8 | zx.d(edx[5])) << 8 | zx.d(edx[4])
        *(arg2 + 4) += 4
        
        if (sub_468d00(arg2, arg1 + 0xc).b != 0)
            *(arg1 + 4) = esi_7
            result.b = 1
            return result

result.b = 0
return result
