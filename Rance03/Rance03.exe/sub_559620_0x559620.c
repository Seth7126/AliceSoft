// 函数: sub_559620
// 地址: 0x559620
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx_1 = *(arg1 + 0x50)
void* esi = nullptr
void* ebx = nullptr

if (edx_1 s>= 0 && edx_1 s< (*(arg1 + 0x3c) - *(arg1 + 0x38)) s>> 2)
    esi = *(*(arg1 + 0x38) + (edx_1 << 2))

int32_t edi = *(arg2 + 0x50)

if (edi s>= 0 && edi s< (*(arg2 + 0x3c) - *(arg2 + 0x38)) s>> 2)
    ebx = *(*(arg2 + 0x38) + (edi << 2))

int32_t esi_1

if (esi == 0)
    esi_1 = 0
else
    esi_1 = *(esi + 0x30)

int32_t result

if (ebx == 0)
    result = 0
else
    result = *(ebx + 0x30)

if (esi_1 == result && *(arg1 + 0xc) == *(arg2 + 0xc))
    float xmm0_1 = *(arg1 + 0x10)
    float temp1_1 = *(arg2 + 0x10)
    xmm0_1 - temp1_1
    result:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2
        | (xmm0_1 < temp1_1 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2))
        float xmm0_2 = *(arg1 + 0x14)
        float temp2_1 = *(arg2 + 0x14)
        xmm0_2 - temp2_1
        result:1.b = (xmm0_2 == temp2_1 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_2, temp2_1) ? 1 : 0) << 2 | (xmm0_2 < temp2_1 ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (not(p_4))
            float xmm0_3 = *(arg1 + 0x18)
            float temp3_1 = *(arg2 + 0x18)
            xmm0_3 - temp3_1
            result:1.b = (xmm0_3 == temp3_1 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_3, temp3_1) ? 1 : 0) << 2 | (xmm0_3 < temp3_1 ? 1 : 0)
            bool p_6 = unimplemented  {test ah, 0x44}
            
            if (not(p_6))
                float xmm0_4 = *(arg1 + 0x1c)
                float temp4_1 = *(arg2 + 0x1c)
                xmm0_4 - temp4_1
                result:1.b = (xmm0_4 == temp4_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_4, temp4_1) ? 1 : 0) << 2 | (xmm0_4 < temp4_1 ? 1 : 0)
                bool p_8 = unimplemented  {test ah, 0x44}
                
                if (not(p_8))
                    result.b = 1
                    return result

result.b = 0
return result
