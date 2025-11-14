// 函数: sub_51c560
// 地址: 0x51c560
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
void* arg_4
void* ebx = arg_4

if (sub_5149e0(arg1 + 8, ebx) != 0 && sub_5149e0(arg1 + 0x48, ebx) != 0)
    void* ebp = ebx + 4
    var_4:3.b = *(arg1 + 0xc8) != 0
    sub_414b60(ebp, &var_4:3)
    sub_468ec0(ebx, *(arg1 + 0xcc))
    sub_468ec0(ebx, *(arg1 + 0xd0))
    sub_468ec0(ebx, *(arg1 + 0xd4))
    sub_468ec0(ebx, *(arg1 + 0xb8))
    sub_468ec0(ebx, *(arg1 + 0xbc))
    sub_468ec0(ebx, *(arg1 + 0xc0))
    sub_468ec0(ebx, *(arg1 + 0xc4))
    sub_468ec0(ebx, (*(arg1 + 0x8c) - *(arg1 + 0x88)) s/ 0x1c)
    void* i = *(arg1 + 0x88)
    
    if (i != *(arg1 + 0x8c))
        do
            int32_t ebx_1 = *(i + 4)
            var_4:3.b = ebx_1.b
            sub_414b60(ebp, &var_4:3)
            var_4:3.b = (ebx_1 u>> 8).b
            sub_414b60(ebp, &var_4:3)
            var_4:3.b = (ebx_1 u>> 0x10).b
            sub_414b60(ebp, &var_4:3)
            var_4:3.b = (ebx_1 u>> 0x18).b
            sub_414b60(ebp, &var_4:3)
            int32_t ebx_3 = *(i + 8)
            var_4:3.b = ebx_3.b
            sub_414b60(ebp, &var_4:3)
            var_4:3.b = (ebx_3 u>> 8).b
            sub_414b60(ebp, &var_4:3)
            var_4:3.b = (ebx_3 u>> 0x10).b
            sub_414b60(ebp, &var_4:3)
            var_4:3.b = (ebx_3 u>> 0x18).b
            sub_414b60(ebp, &var_4:3)
            int32_t ebx_5 = *(i + 0x10)
            var_4:3.b = ebx_5.b
            sub_414b60(ebp, &var_4:3)
            var_4:3.b = (ebx_5 u>> 8).b
            sub_414b60(ebp, &var_4:3)
            var_4:3.b = (ebx_5 u>> 0x10).b
            sub_414b60(ebp, &var_4:3)
            var_4:3.b = (ebx_5 u>> 0x18).b
            sub_414b60(ebp, &var_4:3)
            int32_t ebx_7 = *(i + 0x14)
            var_4:3.b = ebx_7.b
            sub_414b60(ebp, &var_4:3)
            var_4:3.b = (ebx_7 u>> 8).b
            sub_414b60(ebp, &var_4:3)
            var_4:3.b = (ebx_7 u>> 0x10).b
            sub_414b60(ebp, &var_4:3)
            var_4:3.b = (ebx_7 u>> 0x18).b
            sub_414b60(ebp, &var_4:3)
            int32_t ebx_9 = *(i + 0x18)
            var_4:3.b = ebx_9.b
            sub_414b60(ebp, &var_4:3)
            var_4:3.b = (ebx_9 u>> 8).b
            sub_414b60(ebp, &var_4:3)
            var_4:3.b = (ebx_9 u>> 0x10).b
            sub_414b60(ebp, &var_4:3)
            var_4:3.b = (ebx_9 u>> 0x18).b
            sub_414b60(ebp, &var_4:3)
            i += 0x1c
        while (i != *(arg1 + 0x8c))
        
        ebx = arg_4
    
    int32_t eax_25 = *(arg1 + 0xf0)
    int32_t* ecx_34 = arg1 + 0xdc
    int32_t esi = ecx_34[4]
    int32_t* edx_3
    
    if (eax_25 u< 0x10)
        edx_3 = ecx_34
    else
        edx_3 = *ecx_34
    
    if (eax_25 u>= 0x10)
        ecx_34 = *ecx_34
    
    void* var_18_29 = arg_4
    sub_468ff0(ebp, *(ebx + 8), ecx_34, edx_3 + esi)
    arg_4.b = 0
    sub_414b60(ebp, &arg_4)
    arg_4.b = *(arg1 + 0xf4) != 0
    sub_414b60(ebp, &arg_4)
    arg_4.b = *(arg1 + 0xf5) != 0
    sub_414b60(ebp, &arg_4)
    int32_t result
    result.b = 1
    return result

return 0
