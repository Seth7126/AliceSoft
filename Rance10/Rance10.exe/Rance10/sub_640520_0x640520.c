// 函数: sub_640520
// 地址: 0x640520
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7462a4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg2
int32_t* var_54_1
int32_t h
int32_t var_14
float lpString_1
int32_t h_4

if (esi[1] s< 0x100)
    float lpString_3 = lpString_1
    int32_t ecx_7 = *(lpString_3 i+ 0x10)
    
    if (ecx_7 != 0)
        h_4 = esi[2]
        
        if (*(lpString_3 i+ 0x14) u>= 0x10)
            lpString_3 = *lpString_3
        
        lpString_3.b = *lpString_3
        
        if (lpString_3.b u< 0x81 || lpString_3.b u> 0x9f)
            lpString_3.b += 0x20
            
            if (lpString_3.b u> 0xf)
                h_4 = (h_4 + 1) s>> 1
    else
        h_4 = 0
    
    int32_t edx_2
    
    if (ecx_7 != 0)
        edx_2 = esi[2]
    else
        edx_2 = 0
    
    int32_t ecx_8 = *(arg1 + 0x48)
    var_14 = edx_2
    
    if (sub_640a70(arg1, ecx_8 * h_4, ecx_8 * edx_2) != 0 && sub_640c50(arg1, esi) != 0)
        SetTextColor(*(arg1 + 0x34), 0xffffff)
        SetBkColor(*(arg1 + 0x34), 0)
        SetBkMode(*(arg1 + 0x34), 1)
        int32_t h_1 = SelectObject(*(arg1 + 0x34), *(arg1 + 0xe4))
        float lpString = lpString_1
        h = h_1
        int32_t c = *(lpString i+ 0x10)
        
        if (*(lpString i+ 0x14) u>= 0x10)
            lpString = *lpString
        
        var_54_1 = nullptr
        TextOutA(*(arg1 + 0x34), 0, 0, lpString, c)
        SelectObject(*(arg1 + 0x34), h)
        goto label_6406bd
else
    int32_t* var_48 = &var_14
    var_54_1 = esi
    
    if (sub_640930(arg1, var_54_1, lpString_1, &h) != 0)
        h_4 = h
        var_14 = var_14
    label_6406bd:
        float xmm0_2 = sub_4a78b0(esi[7])
        float ecx_12 = esi[2]
        int32_t h_3 = ecx_12
        int32_t h_6 = int.d(xmm0_2)
        lpString_1 = ecx_12
        float xmm0_3 = esi[8]
        
        if (h_6 s< ecx_12)
            h_3 = h_6
        
        h = h_3
        float xmm0_4 = sub_4a78b0(xmm0_3)
        float lpString_5 = lpString_1
        int32_t lpString_7 = int.d(xmm0_4)
        
        if (lpString_7 s< lpString_5)
            lpString_5 = lpString_7
        
        int32_t h_2 = h
        lpString_1 = lpString_5
        
        if (h_2 s<= 0)
            goto label_640754
        
        float xmm1_1 = esi[7]
        int32_t* esi_1 = &h
        float h_5 = _mm_cvtepi32_ps(zx.o(h_2))
        int32_t var_4c_9 = var_14
        h = h_5
        float var_1c = xmm1_1
        
        if (xmm1_1 <= h_5)
            esi_1 = &var_1c
        
        if (sub_63fd10(arg1 + 0x50, h_4, var_4c_9, h_2) != 0)
            int32_t var_4c_10 = *esi_1
            
            if (sub_63fdf0(arg1 + 0x50, arg1 + 0xc, var_54_1) != 0)
                esi = arg2
                lpString_5 = lpString_1
            label_640754:
                
                if (lpString_5 s<= 0)
                label_6407b6:
                    float lpString_4 = *(arg1 + 4)
                    lpString_1 = lpString_4
                    
                    if (lpString_4 != 0)
                        int32_t eax_21 = int.d(sub_4a78b0(arg2[7]))
                        int32_t edi_1 = arg2[2]
                        int32_t esi_3 = edi_1
                        
                        if (eax_21 s< edi_1)
                            esi_3 = eax_21
                        
                        int32_t eax_22 = int.d(sub_4a78b0(arg2[8]))
                        
                        if (eax_22 s< edi_1)
                            edi_1 = eax_22
                        
                        if (esi_3 s> edi_1)
                            edi_1 = esi_3
                        
                        lpString_4 =
                            (*(*lpString_1 + 8))(h_4 + (edi_1 << 1), var_14 + (edi_1 << 1), 0x20)
                    
                    int32_t* var_30
                    int32_t* eax_25 = sub_432270(&var_30, lpString_4)
                    int32_t* result_1 = nullptr
                    SRWLOCK var_24
                    __builtin_memset(&var_24, 0, 4)
                    sub_4323a0(&result_1, eax_25)
                    int32_t var_8_1 = 0
                    SRWLOCK var_2c
                    __seterrormode(&var_2c)
                    var_8_1.b = 1
                    int32_t* ecx_21 = var_30
                    
                    if (ecx_21 != 0)
                        var_30 = nullptr
                        (*(*ecx_21 + 4))(eax_2)
                    
                    var_8_1.b = 0
                    ___crtSetUnhandledExceptionFilter(&var_2c)
                    __Smtx_lock_shared(&var_24)
                    h_4.b = result_1 != 0
                    __Smtx_unlock_shared(&var_24)
                    char eax_28
                    
                    if (h_4.b != 0)
                        __Smtx_lock_shared(&var_24)
                        int32_t* result_3 = result_1
                        __Smtx_unlock_shared(&var_24)
                        eax_28 = sub_640e40(arg1, result_3, arg2)
                    
                    int32_t* result
                    
                    if (h_4.b == 0 || eax_28 == 0)
                        result = nullptr
                    else
                        __seterrormode(&var_24)
                        result = result_1
                        result_1 = nullptr
                        ___crtSetUnhandledExceptionFilter(&var_24)
                    
                    __seterrormode(&var_24)
                    int32_t var_8_2 = 2
                    int32_t* result_2 = result_1
                    
                    if (result_2 != 0)
                        result_1 = nullptr
                        (*(*result_2 + 4))(eax_2)
                    
                    ___crtSetUnhandledExceptionFilter(&var_24)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return result
                
                float xmm0_7 = esi[8]
                float* esi_2 = &lpString_1
                float lpString_6 = _mm_cvtepi32_ps(zx.o(lpString_5))
                int32_t var_4c_11 = var_14
                lpString_1 = lpString_6
                var_1c = xmm0_7
                
                if (xmm0_7 <= lpString_6)
                    esi_2 = &var_1c
                
                if (sub_63fd10(arg1 + 0x98, h_4, var_4c_11, lpString_5) != 0)
                    float var_4c_12 = *esi_2
                    
                    if (sub_63fdf0(arg1 + 0x98, arg1 + 0xc, var_54_1) != 0)
                        goto label_6407b6
    else
        void** lpString_2 = lpString_1
        int32_t ecx = lpString_2[4]
        
        if (ecx != 0)
            h_4 = esi[2]
            
            if (lpString_2[5] u>= 0x10)
                lpString_2 = *lpString_2
            
            lpString_2.b = *lpString_2
            
            if (lpString_2.b u< 0x81 || lpString_2.b u> 0x9f)
                lpString_2.b += 0x20
                
                if (lpString_2.b u> 0xf)
                    h_4 = (h_4 + 1) s>> 1
        else
            h_4 = 0
        
        int32_t edx_1
        
        if (ecx != 0)
            edx_1 = esi[2]
        else
            edx_1 = 0
        
        int32_t ecx_1 = *(arg1 + 0x48)
        var_14 = edx_1
        
        if (sub_640a70(arg1, ecx_1 * h_4, ecx_1 * edx_1) != 0 && sub_640bc0(arg1) != 0)
            goto label_6406bd
fsbase->NtTib.ExceptionList = ExceptionList
return 0
