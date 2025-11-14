// 函数: sub_47e360
// 地址: 0x47e360
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_41fff0(arg1 + 4)
uint32_t edi = arg2
char* ecx_1 = *(edi + 4)
uint32_t result

if (&ecx_1[4] u> *(edi + 8))
label_47e45c:
    result.b = 0
    return result

arg2 = nullptr
uint32_t ebx_7 = ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
*(edi + 4) = &ecx_1[4]

if (ebx_7 s> 0)
    do
        char* edx_1 = *(edi + 4)
        int32_t ebp_1 = *(edi + 8)
        
        if (&edx_1[4] u> ebp_1)
            goto label_47e45c
        
        result = ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(edi + 4) = &edx_1[4]
        
        if (&edx_1[8] u> ebp_1)
            goto label_47e45c
        
        uint32_t edx_4 = zx.d(edx_1[7]) << 8 | zx.d(edx_1[6])
        uint32_t result_1 = result
        uint32_t edx_8 = (edx_4 << 8 | zx.d(edx_1[5])) << 8 | zx.d(edx_1[4])
        *(edi + 4) = &edx_1[8]
        uint32_t var_c_1 = edx_8
        int32_t* eax_8
        int32_t ecx_11
        eax_8, ecx_11 = sub_442a00(&result_1)
        int32_t* var_2c_2 = eax_8
        void* var_30_1 = &eax_8[4]
        void** var_8
        sub_430ad0(arg1 + 4, &var_8, ecx_11)
        result = arg2 + 1
        arg2 = result
    while (result s< ebx_7)

result.b = 1
return result
