// 函数: sub_49e740
// 地址: 0x49e740
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730cc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1

if (arg3 u<= 0xf)
    if (arg3 == 0xf)
        sub_49f410(arg1, arg2)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (arg3 - 1 u<= 5)
        switch (arg3)
            case 1
                sub_49ec60(arg1, arg2)
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
            case 2
                sub_49f8f0(arg1)
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
            case 5
                struct common::CSize::VTable* const var_1c = &common::CSize::`vftable'
                uint32_t var_18 = zx.d(arg5.w)
                uint32_t var_14 = arg5 u>> 0x10
                int32_t var_8_1 = 0
                sub_49ed40(esi, &var_1c)
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
            case 6
                sub_49f4c0(arg1, arg2, arg4, arg5)
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
else if (arg3 u<= 0x200)
    if (arg3 == 0x200)
        uint32_t var_30_13 = arg5
        sub_49fe60(arg1, arg2, arg1)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (arg3 u<= 0x100)
        if (arg3 == 0x100)
            char** var_30_3 = arg1
            sub_4a0040(arg1, arg2, arg4)
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0
        
        if (arg3 == 0x10)
            sub_4a0290(arg1, arg2)
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0
    else if (arg3 - 0x101 u<= 0x1e)
        switch (arg3)
            case 0x101
                char** var_30_7 = arg1
                WPARAM var_34_6 = arg4
                sub_4a00f0(arg1)
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
            case 0x102
                LRESULT eax_16 = sub_4a0240(arg1, arg2, arg4, arg5)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_16
            case 0x10d
                *(esi + 0x181) = 1
                LRESULT eax_14 = DefWindowProcA(arg2, 0x10d, arg4, arg5)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_14
            case 0x10e
                *(esi + 0x181) = 0
                LRESULT eax_15 = DefWindowProcA(arg2, 0x10e, arg4, arg5)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_15
            case 0x10f
                LRESULT eax_13 = DefWindowProcA(arg2, 0x10f, arg4, arg5)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_13
            case 0x111
                uint32_t eax_9 = arg4 u>> 0x10
                
                if (eax_9 == 0)
                    WPARAM var_30_5 = arg4
                    sub_49fc00(esi, arg2, arg4.w)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 0
                
                if (eax_9 != 1)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 0
                
                WPARAM var_30_4 = arg4
                sub_49fd90(esi, arg2, arg4.w)
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
            case 0x112
                LRESULT eax_12 = sub_49f830(arg1, arg2, arg4, arg5)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_12
            case 0x113
                sub_49ff10(arg1, arg2)
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
            case 0x11f
                uint32_t var_30_12 = arg5
                sub_4a0200(arg1, arg1, arg4)
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
else if (arg3 u> 0x214)
    if (arg3 == 0x233)
        char** var_30_20 = arg1
        WPARAM var_34_18 = arg4
        sub_49f9a0(arg1, arg1)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (arg3 == 0x7fff)
        sub_4a0320(arg1, arg2)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
else
    if (arg3 == 0x214)
        uint32_t var_30_16 = arg5
        WPARAM var_34_14 = arg4
        LRESULT eax_22 = sub_49f080(arg1, arg2)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_22
    
    if (arg3 - 0x201 u<= 9)
        switch (arg3)
            case 0x201, 0x204, 0x207
                if (*(esi + 0x1f0) == 0)
                    SetCapture(arg2)
                
                *(esi + 0x1f0) += 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
            case 0x202, 0x205, 0x208
                int32_t eax_19 = *(esi + 0x1f0)
                
                if (eax_19 s> 0)
                    *(esi + 0x1f0) = eax_19 - 1
                    
                    if (eax_19 == 1)
                        ReleaseCapture()
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 0
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
            case 0x20a
                char** var_30_15 = arg1
                WPARAM var_34_13 = arg4
                sub_4a01a0(arg1, arg1)
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0

WPARAM wParam = arg4
HWND hWnd = arg2

if (arg3 u>= 0x400)
    uint32_t var_30_18 = arg5
    sub_49f6a0(esi, sub_49a090(esi + 0x270, hWnd, arg3, wParam, arg5), arg3, arg4)
    wParam = arg4
    hWnd = arg2

LRESULT eax_23 = DefWindowProcA(hWnd, arg3, wParam, arg5)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_23
