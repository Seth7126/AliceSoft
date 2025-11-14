// 函数: sub_406810
// 地址: 0x406810
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b307b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_88
int32_t var_10 = __security_cookie ^ &var_88
int32_t ebx
int32_t var_8c = ebx
int32_t esi
int32_t var_90 = esi
int32_t edi
int32_t var_94 = edi
int32_t var_98 = __security_cookie ^ &var_94
int32_t* esp = &var_98
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
var_88 = 0

if (ecx == 0 || *(arg1 + 8) == 0 || *(arg1 + 0xc) == 0)
    sub_40d770(arg2)
else
    int32_t eax_5 = *ecx
    void var_84
    void* var_a0 = &var_84
    (*(eax_5 + 0xc))(var_a0, arg3)
    esp = &var_98
    int32_t var_4 = 0
    char var_14
    
    if (var_14 != 0)
        void* ecx_3 = &var_84
        
        if (sub_421dd0(ecx_3) == 0)
            if (sub_421e00(ecx_3) == 0)
                sub_40d770(arg2)
                sub_405be0(&var_84)
            else
                int32_t eax_11
                float xmm0_1
                eax_11, xmm0_1 = sub_421f70(&var_84)
                xmm0_1 - 0f
                int32_t var_9c_3 = arg3
                var_a0 = arg2
                esp = &var_a0
                eax_11:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
                    | (xmm0_1 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (not(p_2))
                    (*(**(arg1 + 0xc) + 0xc))()
                    sub_405be0(&var_8c)
                else
                    (*(**(arg1 + 8) + 0xc))()
                    sub_405be0(&var_8c)
        else
            int32_t eax_7 = sub_421e40(ecx_3)
            int32_t var_9c_2 = arg3
            var_a0 = arg2
            esp = &var_a0
            
            if (eax_7 == 0)
                (*(**(arg1 + 0xc) + 0xc))()
                sub_405be0(&var_8c)
            else
                (*(**(arg1 + 8) + 0xc))()
                sub_405be0(&var_8c)
    else
        sub_40d770(arg2)
        sub_405be0(&var_84)

fsbase->NtTib.ExceptionList = esp[0x23]
esp[1]
esp[2]
esp[3]
sub_69a5bc(esp[0x22] ^ &esp[4])
return arg2
