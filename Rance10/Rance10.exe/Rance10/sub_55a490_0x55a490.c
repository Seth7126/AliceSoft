// 函数: sub_55a490
// 地址: 0x55a490
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_1c

if (arg2[5] u< 0x10)
    var_1c = arg2
else
    var_1c = *arg2

int32_t* var_18

if (*(arg1 + 0x18) u< 0x10)
    var_18 = arg1 + 4
else
    var_18 = *(arg1 + 4)

int32_t ecx = arg2[4]
int32_t eax_3 = ecx

if (*(arg1 + 0x14) u< ecx)
    eax_3 = *(arg1 + 0x14)

int32_t result

if (sub_406ac0(eax_3, var_1c, var_18, eax_3) != 0)
label_55a532:
    sub_559960(arg1 + 0xb4)
    sub_559960(arg1 + 0xc0)
    int32_t* var_18_1
    
    if (arg2[5] u< 0x10)
        var_18_1 = arg2
    else
        var_18_1 = *arg2
    
    int32_t eax_12 = 1
    
    if (arg2[4] u< 1)
        eax_12 = arg2[4]
    
    if (sub_406ac0(eax_12, 0x7677d0, var_18_1, eax_12) == 0)
        int32_t eax_14 = arg2[4]
        
        if (eax_14 u>= 1 && eax_14 u<= 1)
            if (arg1 + 4 != arg2)
                sub_403590(arg1 + 4, arg2, 0, 0xffffffff)
            
            return sub_403490(arg1 + 0x1c, 0x75d41b, nullptr)
    
    void* var_2c_4 = arg1 + 0x38
    int32_t var_30_1 = arg4
    sub_559e30(arg1, arg2.b, arg1 + 0xb4)
    void* var_2c_5 = arg1 + 0x78
    int32_t var_30_2 = arg4
    sub_559e30(arg1, arg3.b, arg1 + 0xc0)
    void var_14
    int32_t* eax_20 = sub_55a920(&var_14, arg2)
    int32_t eax_21
    int32_t edx_3
    edx_3:eax_21 = muls.dp.d(0x2aaaaaab, eax_20[1] - *eax_20)
    int32_t edx_4 = edx_3 s>> 2
    sub_417070(&var_14)
    
    if (arg1 + 4 != arg2)
        sub_403590(arg1 + 4, arg2, 0, 0xffffffff)
    
    if (arg1 + 0x1c != arg3)
        sub_403590(arg1 + 0x1c, arg3, 0, 0xffffffff)
    
    *(arg1 + 0xe8) = arg4.b
    *(arg1 + 0xf0) = *arg6
    *(arg1 + 0xec) = arg5
    result = *arg6 + ((edx_4 u>> 0x1f) + edx_4) * arg5
    *(arg1 + 0xf4) = result
    *arg6 = result
else
    int32_t eax_5 = arg2[4]
    int32_t ecx_2 = *(arg1 + 0x14)
    
    if (ecx_2 u< eax_5 || ecx_2 u> eax_5)
        goto label_55a532
    
    if (sub_4076d0(arg1 + 0x1c, arg3) == 0 || *(arg1 + 0xe8) != arg4.b || *(arg1 + 0xec) != arg5)
        goto label_55a532
    
    result = *(arg1 + 0xf0)
    
    if (result != *arg6)
        goto label_55a532

return result
