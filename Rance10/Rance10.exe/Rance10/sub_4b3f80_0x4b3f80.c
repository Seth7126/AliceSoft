// 函数: sub_4b3f80
// 地址: 0x4b3f80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* edx = *(arg2 + 4)
uint32_t* result

if (&edx[4] u<= *(arg2 + 8))
    *(arg1 + 4) = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) += 4
    char* edx_1 = *(arg2 + 4)
    
    if (&edx_1[4] u<= *(arg2 + 8))
        *(arg1 + 8) =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg2 + 4) += 4
        
        if (sub_61ec90(arg2, arg1 + 0xc).b != 0 && sub_61ec90(arg2, arg1 + 0x10).b != 0
                && sub_61ec90(arg2, arg1 + 0x14).b != 0 && sub_61ec90(arg2, arg1 + 0x18).b != 0
                && sub_61ec90(arg2, arg1 + 0x1c).b != 0 && sub_61ec90(arg2, arg1 + 0x20).b != 0
                && sub_61ec90(arg2, arg1 + 0x24).b != 0 && sub_61ec90(arg2, arg1 + 0x28).b != 0)
            *(arg1 + 0x2c) = 1
            result.b = 1
            return result

result.b = 0
return result
