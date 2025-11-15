// 函数: sub_6cad80
// 地址: 0x6cad80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg2
int32_t i = 0
int32_t* ebx_1 = arg1 - edi
int32_t result

do
    int32_t j = 0
    int32_t* ecx = edi
    
    do
        float xmm0_1 = *(ebx_1 + ecx)
        float temp1_1 = *ecx
        xmm0_1 - temp1_1
        result:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2 | (xmm0_1 < temp1_1 ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            result.b = 0
            return result
        
        j += 1
        ecx = &ecx[1]
    while (j s< 4)
    
    i += 1
    edi = &edi[4]
while (i s< 4)

result.b = 1
return result
