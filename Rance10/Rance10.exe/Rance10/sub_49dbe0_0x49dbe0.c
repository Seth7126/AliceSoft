// 函数: sub_49dbe0
// 地址: 0x49dbe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730b98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 0
int32_t result

if (**(arg1 + 0x10) != 0)
    int32_t* eax_3
    
    if (arg2 == 0)
        eax_3.b = *(arg1 + 0x85)
    
    int32_t ebx
    
    if (arg2 != 0 || eax_3.b == 0)
        ebx.b = 0
    else
        ebx.b = 1
    
    char var_26_1 = ebx.b
    struct common::CSize::VTable* const var_44 = &common::CSize::`vftable'
    int32_t var_40_1 = 0
    int32_t var_3c_1 = 0
    int32_t var_8_1 = 0
    ebx:1.b = arg3
    struct common::CSize::VTable* var_34
    int32_t eax_8
    
    if ((*(*(arg1 + 4) + 0x74))(eax_2) != 0)
        int32_t var_40_2 = *(arg1 + 0x6c)
        eax_8 = *(arg1 + 0x70)
    else if (ebx:1.b != 0)
        int32_t var_40_3 = *(arg4 + 4)
        eax_8 = *(arg4 + 8)
    else if (ebx.b == 0)
        int32_t ecx_4 = 0x5c
        
        if (arg6 != 0)
            ecx_4 = 0x50
        
        int32_t var_40_5 = *(arg1 + ecx_4 + 4)
        eax_8 = *(arg1 + ecx_4 + 8)
    else
        struct common::CSize::VTable** eax_10 = sub_4a63e0(arg1 + 0x74, &var_34)
        eax_8 = eax_10[2]
        int32_t var_40_4 = eax_10[1]
    
    int32_t var_3c_2 = eax_8
    struct common::CRect::VTable* var_64
    sub_49daf0(arg1, &var_64)
    var_8_1.b = 1
    RECT rect
    GetClientRect(**(arg1 + 0x10), &rect)
    int32_t var_30_1 = rect.right - rect.left
    int32_t var_2c_1 = rect.bottom - rect.top
    var_34 = &common::CSize::`vftable'
    struct common::CSize::VTable* var_7c
    void var_70
    void var_54
    struct common::CSize::VTable** eax_16 =
        sub_404b50(sub_404b20(&var_54, &var_7c, &var_44), &var_70, &var_34)
    int32_t ecx_10 = eax_16[1]
    int32_t eax_17 = eax_16[2]
    int32_t var_4c_1 = eax_17
    int32_t var_50_1 = ecx_10
    int32_t var_5c_1
    int32_t ebx_1
    
    if ((*(*(arg1 + 4) + 0x74))() == 0)
        struct common::CPoint::VTable** eax_21
        
        if (ebx:1.b != 0)
            eax_21 = arg5
        else if (ebx.b == 0)
            eax_21 = sub_49df10(&var_70, &var_54)
        else
            eax_21 = sub_4a63c0(arg1 + 0x74, &var_70)
        
        ebx_1 = eax_21[2]
        var_5c_1 = eax_21[1]
        
        if (ebx_1 s< 0)
            ebx_1 = 0
    else
        var_5c_1 = 0
        ebx_1 = 0
    
    int32_t var_58_1 = ebx_1
    int32_t eax_22 = GetSystemMetrics(SM_CXSCREEN)
    char var_25_1
    int32_t eax_23
    
    if (ecx_10 s<= eax_22)
        eax_23 = GetSystemMetrics(SM_CYSCREEN)
        var_25_1 = 1
    
    if (ecx_10 s> eax_22 || eax_17 s> eax_23)
        var_25_1 = 0
    
    char var_25_2
    
    if (arg3 != 0 || var_26_1 != 0)
    label_49de3f:
        var_25_2 = 1
    label_49de4e:
        HWND hWnd = **(arg1 + 0x10)
        int32_t ecx_18
        ecx_18.b = (*(*(arg1 + 4) + 0x74))(var_5c_1, ebx_1, ecx_10, eax_17, 0x40) != 0
        SetWindowPos(hWnd, ecx_18 - 2)
        GetClientRect(**(arg1 + 0x10), &rect)
        *(arg1 + 0x6c) = rect.right - rect.left
        *(arg1 + 0x70) = rect.bottom - rect.top
        SetFocus(**(arg1 + 0x10))
        SetForegroundWindow(**(arg1 + 0x10))
        *(arg1 + 0x138) = *(arg1 + 0x6c)
        *(arg1 + 0x13c) = *(arg1 + 0x70)
        
        if (*(arg1 + 0x110) != 0)
            (*(**(arg1 + 0x110) + 0x14))(*(arg1 + 0x138), *(arg1 + 0x13c))
        
        if (var_25_2 != 0)
            result.b = arg6 != 0
        else
            result = 2
    else
        char eax_26 = (*(*(arg1 + 4) + 0x74))()
        
        if (eax_26 != 0 || var_25_1 != eax_26)
            goto label_49de3f
        
        float xmm0_1 = *(arg1 + 0x9c)
        xmm0_1 - 1f
        var_25_2 = eax_26
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2 || arg6 != ((xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2
                | (xmm0_1 < 1f ? 1 : 0)))
            goto label_49de4e
        
        var_34 = &common::CSize::`vftable'
        int32_t var_30_2 = 0
        int32_t var_2c_2 = 0
        
        if (sub_404bb0(arg1 + 0x50, &var_34) == 0)
            goto label_49de4e
        
        var_34 = &common::CPoint::`vftable'
        int32_t var_30_3 = 0
        int32_t var_2c_3 = 0
        var_8_1.b = 2
        result = sub_49dbe0(0, 0, arg1 + 0x50, &var_34, 1)
else
    result = 3

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
