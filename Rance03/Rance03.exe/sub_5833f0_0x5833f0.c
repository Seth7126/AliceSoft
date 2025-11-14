// 函数: sub_5833f0
// 地址: 0x5833f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm0 = *(arg1 + 0x4c)
xmm0 f- 0
void* result
result:1.b =
    (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    float xmm0_1 = *(arg1 + 0x50)
    xmm0_1 f- 0
    result:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
        | (xmm0_1 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (not(p_3))
        int32_t var_8_1 = *(arg1 + 0x20)
        result = sub_582960(arg2, *(arg1 + 0x1c))
        
        if (result != 0 && ((*(result + 0x34) - *(result + 0x30)) & 0xfffffffc) s<= 4)
            result = sub_583450(arg1)
            
            if (result.b == 0)
                result.b = *(arg1 + 0x74) == result.b
                return result

result.b = 0
return result
