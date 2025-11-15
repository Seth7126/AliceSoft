// 函数: sub_6db59d
// 地址: 0x6db59d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* esi = arg6
char var_28
char* ebx = &var_28
int32_t* var_30 = esi
char* var_38 = &var_28
char eax_3 = sub_6e320e(arg1, arg2)

if (eax_3 == 0)
    if (arg1[1].b == eax_3)
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg1)
    
    uint32_t eax_4 = zx.d(*(arg1 + 6))
    int32_t esi_1 = *(*esi + 0x38)
    j_sub_4033e0()
    char eax_5 = esi_1(eax_4, 0)
    
    if (eax_5 == 0x2b)
        var_28 = eax_5
    label_6db60b:
        void var_27
        ebx = &var_27
        var_38 = &var_27
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg1)
    else if (eax_5 == 0x2d)
        var_28 = eax_5
        goto label_6db60b
    
    esi = var_30

char var_29 = 0

if (sub_6e320e(arg1, arg2) == 0)
    ebx.b = var_29
    
    while (true)
        if (arg1[1].b == 0)
            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg1)
        
        uint32_t eax_7 = zx.d(*(arg1 + 6))
        int32_t esi_2 = *(*esi + 0x38)
        j_sub_4033e0()
        
        if (esi_2(eax_7, 0) != 0x30)
            break
        
        ebx.b = 1
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg1)
        
        if (sub_6e320e(arg1, arg2) != 0)
            break
        
        esi = var_30
    
    var_29 = ebx.b
    bool cond:0_1 = ebx.b == 0
    ebx = var_38
    
    if (not(cond:0_1))
        *ebx = 0x30
        ebx = &ebx[1]

int32_t ecx_19
int32_t edx_1

while (true)
    char eax_12
    eax_12, ecx_19, edx_1 = sub_6e320e(arg1, arg2)
    
    if (eax_12 != 0)
        break
    
    if (arg1[1].b == 0)
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg1)
    
    uint32_t eax_10 = zx.d(*(arg1 + 6))
    int32_t esi_3 = *(*var_30 + 0x38)
    j_sub_4033e0()
    int32_t eax_11
    eax_11, edx_1 = esi_3(eax_10, 0)
    ecx_19 = eax_11 - 0x30
    
    if (ecx_19.b u> 9)
        break
    
    *ebx = eax_11.b
    void var_9
    
    if (ebx u< &var_9)
        ebx = &ebx[1]
    
    var_29 = 1
    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg1)

if (var_29 == 0)
    ebx = &var_28

*ebx = 0
int32_t var_3c = 0
int32_t var_40
int32_t eax_14 = __Stolx(&var_28, edx_1, ecx_19, &var_28, &var_40, 0xa, &var_3c)
int32_t result

if (sub_6e320e(arg1, arg2) == 0)
    result = 0
else
    result = 1

if (var_40 == &var_28 || var_3c != 0 || eax_14 s< arg3 || arg4 s< eax_14)
    result |= 2
else
    *arg5 = eax_14

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
