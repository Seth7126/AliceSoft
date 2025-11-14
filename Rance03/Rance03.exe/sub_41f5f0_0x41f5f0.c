// 函数: sub_41f5f0
// 地址: 0x41f5f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b4887
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_a4
int32_t eax_2 = __security_cookie ^ &var_a4
int32_t __saved_edi
int32_t var_b4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
POINT point
point.x = 0
POINT var_8c
var_8c.x = sx.d(arg3.w)
var_8c.y = sx.d((arg3 u>> 0x10).w)
ScreenToClient(arg2, &var_8c)
LRESULT lParam = SendMessageA(arg2, 0x1111, 0, &var_8c)
LRESULT var_9c = lParam

if (lParam != 0)
    SendMessageA(arg2, 0x110b, 9, lParam)
    int32_t* hMenu_2
    sub_420040(arg1 + 8, &hMenu_2, &var_9c)
    int32_t* hMenu_3 = hMenu_2
    
    if (hMenu_3 != *(arg1 + 8))
        int32_t* hMenu_4 = hMenu_3[5]
        hMenu_2 = hMenu_4
        char var_7c
        int32_t var_68
        char var_4c
        char* eax_8
        int32_t ebx_1
        
        if (*hMenu_4 != 5)
            eax_8 = sub_402b00(&var_4c, &hMenu_4[7])
            ebx_1 = 2
        else
            var_68 = 0xf
            int32_t var_6c_1 = 0
            var_7c = 0
            sub_401ff0(&var_7c, &hMenu_4[7], 0, 0xffffffff)
            eax_8 = &var_7c
            ebx_1 = 1
        
        int32_t* var_64
        sub_403000(&var_64, eax_8)
        int32_t var_c_1 = 1
        
        if ((ebx_1.b & 2) != 0)
            ebx_1 &= 0xfffffffd
            int32_t var_38
            
            if (var_38 u>= 0x10)
                j__free(var_4c.d)
            
            int32_t var_38_1 = 0xf
            int32_t var_3c_1 = 0
            var_4c = 0
        
        var_c_1.b = 2
        
        if ((ebx_1.b & 1) != 0)
            if (var_68 u>= 0x10)
                j__free(var_7c.d)
            
            int32_t var_68_1 = 0xf
            int32_t var_6c_2 = 0
            var_7c = 0
        
        LRESULT i = 0
        int32_t eax_9
        int32_t edx_3
        edx_3:eax_9 = muls.dp.d(0x2aaaaaab, data_75d5c8 - data_75d5c4)
        var_9c = 0
        int32_t edx_4 = edx_3 s>> 2
        int32_t var_50
        
        if ((edx_4 u>> 0x1f) + edx_4 s> 0)
            int32_t edx_8
            
            do
                int32_t* edx_6 = &var_64
                int32_t var_34
                char* ecx_7 = sub_420a40(&var_34, i)
                
                if (var_50 u>= 0x10)
                    edx_6 = var_64
                
                int32_t edi_1 = *(ecx_7 + 0x10)
                
                if (*(ecx_7 + 0x14) u>= 0x10)
                    ecx_7 = *ecx_7
                
                int32_t var_54
                int32_t eax_14 = var_54
                
                if (edi_1 u< var_54)
                    eax_14 = edi_1
                
                int32_t eax_15 = sub_405190(eax_14, edx_6, ecx_7, eax_14)
                bool cond:1_1 = eax_15 == 0
                
                if (eax_15 == 0)
                    int32_t eax_16
                    
                    if (edi_1 u>= var_54)
                        eax_16.b = edi_1 != var_54
                    else
                        eax_16 = 0xffffffff
                    
                    cond:1_1 = eax_16 == 0
                
                i.b = cond:1_1
                int32_t var_20
                
                if (var_20 u>= 0x10)
                    j__free(var_34)
                
                if (i.b != 0)
                    int32_t* hMenu_5 = hMenu_2
                    LRESULT eax_21 = var_9c
                    data_75d4a4 = eax_21
                    data_74b430 = eax_21
                    data_75d4ac = hMenu_5[0xd]
                    HMENU hMenu = CreatePopupMenu()
                    hMenu_2 = hMenu
                    
                    if (hMenu != 0)
                        if (*hMenu_5 == 5)
                            AppendMenuA(hMenu, MF_BYCOMMAND, 0x9c62, 0x6da7e0)
                            AppendMenuA(hMenu, MF_SEPARATOR, 0, nullptr)
                        
                        AppendMenuA(hMenu, MF_BYCOMMAND, 0x9d0b, 0x6da7f8)
                        GetCursorPos(&point)
                        int32_t y = point.y
                        int32_t x = point.x
                        HWND hWnd = GetParent(GetParent(GetParent(GetParent(arg2))))
                        HMENU hMenu_1 = hMenu_2
                        TrackPopupMenu(hMenu_1, TPM_RIGHTBUTTON, x, y, 0, hWnd, nullptr)
                        DestroyMenu(hMenu_1)
                    
                    break
                
                int32_t eax_17
                int32_t edx_7
                edx_7:eax_17 = muls.dp.d(0x2aaaaaab, data_75d5c8 - data_75d5c4)
                i = var_9c + 1
                edx_8 = edx_7 s>> 2
                var_9c = i
            while (i s< (edx_8 u>> 0x1f) + edx_8)
        
        if (var_50 u>= 0x10)
            j__free(var_64)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_a4)
return 0
