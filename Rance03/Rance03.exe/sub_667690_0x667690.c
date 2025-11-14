// 函数: sub_667690
// 地址: 0x667690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6cfdf0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t var_6c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_5
eax_5.b = *(*(arg1 + 0x134) + 0x10)
char result
int32_t i_3
int32_t* var_54
int32_t* var_50
int32_t var_4c

if (eax_5.b == 0)
label_6677b7:
    sub_667ad0(arg1 + 0x1ac, *(arg1 + 0x2bc))
    var_54 = GetScrollPos(*(arg1 + 0x16c), *(arg1 + 0x174))
    RECT rect
    GetClientRect(*(arg1 + 8), &rect)
    int32_t i_6 = *(arg1 + 0x1a4)
    int32_t* i = *(arg1 + 0x1a0)
    i_3 = i_6
    
    for (; i != i_6; i = &i[6])
        if (i[5] u>= 0x10)
            j__free(*i)
            i_6 = i_3
        
        i[5] = 0xf
        i[4] = 0
        *i = 0
    
    int32_t bottom = rect.bottom
    *(arg1 + 0x1a4) = *(arg1 + 0x1a0)
    int32_t* eax_12 = sub_6679a0(&var_50, arg1 + 0x1ac, var_54, *(arg1 + 0x34), bottom)
    
    if (arg1 + 0x1a0 != eax_12)
        int32_t* eax_13 = *(arg1 + 0x1a0)
        
        if (eax_13 != 0)
            sub_4107c0(eax_13, *(arg1 + 0x1a4))
            j__free(*(arg1 + 0x1a0))
            *(arg1 + 0x1a0) = 0
            *(arg1 + 0x1a4) = 0
            *(arg1 + 0x1a8) = 0
        
        *(arg1 + 0x1a0) = *eax_12
        *(arg1 + 0x1a4) = eax_12[1]
        *(arg1 + 0x1a8) = eax_12[2]
        *eax_12 = 0
        eax_12[1] = 0
        eax_12[2] = 0
    
    int32_t var_c_3 = 0xffffffff
    int32_t* eax_17 = var_50
    
    if (eax_17 != 0)
        sub_4107c0(eax_17, var_4c)
        j__free(var_50)
    
    eax_17.b = *(arg1 + 0x150)
    char esi_4 = (*(arg1 + 0x158)).b
    i_3.b = eax_17.b
    int32_t eax_18
    int32_t ecx_5
    eax_18, ecx_5 = GetScrollPos(*(arg1 + 0x188), *(arg1 + 0x190))
    int32_t i_5 = i_3
    char var_34
    sub_671cc0(&var_34, arg1 + 0x1a0, eax_18, ecx_5, esi_4 - (*(arg1 + 0x2c)).b)
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34.d)
    
    int32_t var_70_15 = *(arg1 + 0x158)
    int32_t var_74_10 = *(arg1 + 0x154)
    i_3.b = *(arg1 + 0x164)
    char i_4 = i_3.b
    int32_t var_20_1 = 0xf
    enum SCROLLBAR_CONSTANTS nBar = *(arg1 + 0x190)
    int32_t var_24_1 = 0
    HWND hWnd = *(arg1 + 0x188)
    var_34 = 0
    sub_670d10(arg1 + 0x1b8, GetScrollPos(hWnd, nBar), i_4, var_74_10, var_70_15)
    InvalidateRect(*(arg1 + 8), nullptr, 0)
    result = UpdateWindow(*(arg1 + 8))
else
    int32_t var_c_1 = 0
    __builtin_memset(&i_3, 0, 0x14)
    int32_t* ecx_1
    result, ecx_1 = sub_44cf30(&var_54, &i_3)
    
    if (result != 0)
        int32_t* esi_1 = var_54
        
        if (esi_1 != 0)
            int32_t i_2 = i_3
            
            if (i_2 s> 0)
                int32_t i_1
                
                do
                    int32_t eax_6
                    
                    if (*(arg1 + 0x12c) != 0)
                        int32_t var_70_1 = *esi_1
                        eax_6, ecx_1 = sub_680ed0(ecx_1)
                    
                    if (*(arg1 + 0x12c) == 0 || eax_6 == 1)
                        ecx_1 = sub_4158d0(&var_50, esi_1)
                    
                    esi_1 = &esi_1[1]
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                *(arg1 + 0x1b0) = *(arg1 + 0x1ac)
                sub_667cb0(arg1 + 0x1ac, &var_50)
                int32_t* esi_2 = var_50
                *(arg1 + 0x17c) = ((var_4c - esi_2) s>> 2) + 1
                sub_670600(arg1 + 0x168)
                int32_t var_c_2 = 0xffffffff
                
                if (esi_2 != 0)
                    j__free(esi_2)
                
                goto label_6677b7
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
