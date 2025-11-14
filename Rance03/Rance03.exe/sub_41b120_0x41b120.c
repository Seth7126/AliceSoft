// 函数: sub_41b120
// 地址: 0x41b120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b4388
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t var_6c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* lpString = arg5
int32_t ebx = 0
HDC color = arg2
HDC hdc = color
char* lpString_1 = lpString
int32_t var_50 = 0
int32_t var_54 = 0

while (*lpString != 0)
    void* eax_5 = sub_41b3d0(lpString)
    int32_t var_20_1 = 0xf
    int32_t var_24_1 = 0
    char var_34 = 0
    sub_402110(&var_34, lpString, eax_5 - lpString)
    int32_t var_c_1 = 0
    char eax_9 = (*(*arg1 + 0xa4))(&var_34)
    int32_t var_c_2 = 0xffffffff
    
    if (var_20_1 u>= 0x10)
        j__free(var_34.d)
    
    COLORREF color_1 = 0xff0000
    
    if (eax_9 == 0)
        color_1 = arg1[0x14]
    
    color = arg1[0x14]
    HDC color_2 = color
    
    if (lpString u< eax_5)
        do
            if ((*(*arg1 + 0xa8))(lpString).b == 0)
                if (arg1[0x14] != color_1)
                    SetTextColor(arg1[0x11], color_1)
                    arg1[0x14] = color_1
            else if (arg1[0x14] != 0x8000)
                SetTextColor(arg1[0x11], 0x8000)
                arg1[0x14] = 0x8000
            
            COLORREF eax_12
            eax_12.b = *lpString
            
            if ((eax_12.b u>= 0x81 && eax_12.b u<= 0x9f)
                    || (eax_12.b u>= 0xe0 && eax_12.b u<= 0xef))
                TextOutA(hdc, arg3 + ebx, arg4, lpString, 2)
                ebx += arg1[0x15]
                lpString = &lpString[2]
                var_54 += 2
                var_50 = ebx
            else if (eax_12.b != 9)
                TextOutA(hdc, arg3 + ebx, arg4, lpString, 1)
                lpString = &lpString[1]
                int32_t eax_26
                int32_t edx_2
                edx_2:eax_26 = sx.q(arg1[0x15])
                ebx += (eax_26 - edx_2) s>> 1
                var_54 += 1
                var_50 = ebx
            else
                int32_t i_1 = 4 - (var_54 & 3)
                int16_t string = 0x20
                
                if (i_1 s> 0)
                    int32_t edi = var_50
                    var_54 += i_1
                    int32_t i
                    
                    do
                        TextOutA(hdc, arg3 + edi, arg4, &string, 1)
                        int32_t eax_20
                        int32_t edx_1
                        edx_1:eax_20 = sx.q(arg1[0x15])
                        edi += (eax_20 - edx_1) s>> 1
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    var_50 = edi
                    lpString = lpString_1
                
                ebx = var_50
                lpString = &lpString[1]
            
            lpString_1 = lpString
        while (lpString u< eax_5)
        
        color = color_2
    
    if (arg1[0x14] != color)
        SetTextColor(arg1[0x11], color)
        color = color_2
        arg1[0x14] = color

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return color
