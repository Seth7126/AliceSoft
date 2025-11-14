// 函数: sub_54a100
// 地址: 0x54a100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = arg1
void* result_1 = result
int32_t* i = *(result + 4)

while (i != *(result + 8))
    void* ebx_1 = *i
    float xmm2_1 = 3.40282347e+38f
    float xmm1_1 = -3.40282347e+38f
    void* j = *(ebx_1 + 0x28)
    struct sealengine::CClipBox::VTable* const var_1c = &sealengine::CClipBox::`vftable'
    int128_t var_18
    __builtin_memcpy(&var_18, 
        "\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\x7f\xff\xff\x7f\xff", 
        0x18)
    
    if (j != *(ebx_1 + 0x2c))
        do
            sub_539150(j, arg2, &var_1c)
            j += 0x4c
        while (j != *(ebx_1 + 0x2c))
        
        float var_4
        xmm1_1 = var_4
        float var_8
        xmm2_1 = var_8
        result = result_1
    
    i = &i[1]
    float xmm0_3 = (var_18.d f+ var_18:4.d) * 0.5f
    *(ebx_1 + 0x68) = (xmm1_1 + xmm2_1) * 0.5f
    *(ebx_1 + 0x60) = xmm0_3
    *(ebx_1 + 0x64) = (var_18:0xc.d f+ var_18:8.d) * 0.5f

return result
