// 函数: sub_5e59b0
// 地址: 0x5e59b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cb450
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL result

if (*arg2 == arg2[1])
    result.b = 1
else
    HMENU hMenu = GetMenu(**(arg1 + 0xc))
    struct win32only::CMenu::VTable* var_3c
    int32_t var_2c
    int32_t var_18
    
    if (*(arg1 + 0x230) == 0)
        HMENU hMenu_1 = *(arg1 + 0x230)
        
        if (hMenu_1 != 0)
            if (*(arg1 + 0x234) != 0)
                DestroyMenu(hMenu_1)
            
            *(arg1 + 0x230) = 0
        
        *(arg1 + 0x234) = 1
        result = CreatePopupMenu()
        *(arg1 + 0x230) = result
        
        if (result == 0)
        label_5e5a87:
            result.b = 0
        else
            uint32_t i = 0
            int32_t eax_8
            int32_t edx_1
            edx_1:eax_8 = muls.dp.d(0x2aaaaaab, arg2[1] - *arg2)
            int32_t edx_2 = edx_1 s>> 2
            
            if ((edx_2 u>> 0x1f) + edx_2 s> 0)
                int32_t eax_12 = 0
                int32_t var_40_1 = 0
                int32_t edx_4
                
                do
                    if (sub_6980b0(arg1 + 0x22c, i, *arg2 + eax_12, i.w - 0x63b6).b == 0)
                        goto label_5e5a87_2
                    
                    i += 1
                    var_40_1 += 0x18
                    int32_t eax_14
                    int32_t edx_3
                    edx_3:eax_14 = muls.dp.d(0x2aaaaaab, arg2[1] - *arg2)
                    edx_4 = edx_3 s>> 2
                    eax_12 = var_40_1
                while (i s< (edx_4 u>> 0x1f) + edx_4)
            
            HMENU eax_18 = GetSubMenu(hMenu, 2)
            
            if (eax_18 != 0)
                DrawMenuBar(**(arg1 + 0xc))
                result.b = 1
            else
                var_3c = &win32only::CMenu::`vftable'
                int32_t var_4_1 = 1
                HMENU hMenu_3 = hMenu
                char var_34_2 = eax_18.b
                int32_t* ecx_12 = sub_401f60(&var_2c, 0x6eb61c)
                int32_t var_5c_6 = *(arg1 + 0x230)
                result.b = sub_698140(&var_3c, ecx_12, &var_2c).b == 0
                char var_41_2 = result.b
                
                if (var_18 u>= 0x10)
                    j__free(var_2c)
                    result.b = var_41_2
                
                if (result.b != 0)
                label_5e5a87_1:
                    result.b = 0
                else
                    DrawMenuBar(**(arg1 + 0xc))
                    result.b = 1
    else
        HMENU eax_6 = GetSubMenu(hMenu, 2)
        
        if (eax_6 != 0)
            DrawMenuBar(**(arg1 + 0xc))
            result.b = 1
        else
            var_3c = &win32only::CMenu::`vftable'
            HMENU var_4 = eax_6
            HMENU hMenu_2 = hMenu
            char var_34_1 = eax_6.b
            int32_t* ecx_1 = sub_401f60(&var_2c, 0x6eb4b8)
            int32_t var_5c_2 = *(arg1 + 0x230)
            bool eax_7 = sub_698140(&var_3c, ecx_1, &var_2c) == 0
            
            if (var_18 u>= 0x10)
                j__free(var_2c)
            
            struct win32only::CMenu::VTable** ecx_3 = &var_3c
            
            if (eax_7 == 0)
                sub_698040(ecx_3)
                DrawMenuBar(**(arg1 + 0xc))
                result.b = 1
            else
                sub_698040(ecx_3)
            label_5e5a87_2:
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
