// 函数: ?_Getint@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABAHAAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0HHAAHABV?$ctype@D@2@@Z
// 地址: 0x6e4389
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* esi = arg6
char var_28
char* ebx = &var_28
int32_t* var_30 = esi
char* var_3c = &var_28
char eax_3 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(arg1, arg2)

if (eax_3 == 0)
    if (arg1[1].b == eax_3)
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(arg1)
    
    int32_t var_5c_1 = (*(arg1 + 5)).d
    int32_t esi_1 = *(*esi + 0x28)
    j_sub_4033e0()
    char eax_5 = esi_1(var_5c_1, 0)
    
    if (eax_5 == 0x2b)
        var_28 = eax_5
    label_6e43fb:
        void var_27
        ebx = &var_27
        var_3c = &var_27
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(arg1)
    else if (eax_5 == 0x2d)
        var_28 = eax_5
        goto label_6e43fb
    
    esi = var_30

char var_29 = 0

if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(arg1, arg2) == 0)
    ebx.b = var_29
    
    while (true)
        if (arg1[1].b == 0)
            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(arg1)
        
        int32_t var_5c_2 = (*(arg1 + 5)).d
        int32_t esi_2 = *(*esi + 0x28)
        j_sub_4033e0()
        
        if (esi_2(var_5c_2, 0) != 0x30)
            break
        
        ebx.b = 1
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(arg1)
        
        if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(arg1, arg2) != 0)
            break
        
        esi = var_30
    
    var_29 = ebx.b
    bool cond:0_1 = ebx.b == 0
    ebx = var_3c
    
    if (not(cond:0_1))
        *ebx = 0x30
        ebx = &ebx[1]

int32_t ecx_15
int32_t edx_1

while (true)
    char eax_9
    eax_9, ecx_15, edx_1 =
        std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(arg1, arg2)
    
    if (eax_9 != 0)
        break
    
    if (arg1[1].b == 0)
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(arg1)
    
    int32_t var_5c_3 = (*(arg1 + 5)).d
    int32_t esi_3 = *(*var_30 + 0x28)
    j_sub_4033e0()
    int32_t eax_12
    eax_12, edx_1 = esi_3(var_5c_3, 0)
    ecx_15 = eax_12 - 0x30
    
    if (ecx_15.b u> 9)
        break
    
    *ebx = eax_12.b
    void var_9
    
    if (ebx u< &var_9)
        ebx = &ebx[1]
    
    var_29 = 1
    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(arg1)

if (var_29 == 0)
    ebx = &var_28

*ebx = 0
int32_t var_40 = 0
int32_t var_44
int32_t eax_14 = __Stolx(&var_28, edx_1, ecx_15, &var_28, &var_44, 0xa, &var_40)
int32_t result

if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(arg1, arg2) == 0)
    result = 0
else
    result = 1

if (var_44 == &var_28 || var_40 != 0 || eax_14 s< arg3 || arg4 s< eax_14)
    result |= 2
else
    *arg5 = eax_14

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
