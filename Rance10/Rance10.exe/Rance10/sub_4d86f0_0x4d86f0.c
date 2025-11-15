// 函数: sub_4d86f0
// 地址: 0x4d86f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7345be
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1d4 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
void* var_14 = esi

if (*(esi + 8) != 0)
    result = *(esi + 0x10)
    
    if (result != *(esi + 0x14))
        int32_t eax_3 = sub_4d8940(arg1, arg2)
        int32_t* edi_1 = *(esi + 0x10)
        int32_t ebx_1 = *(esi + 0x14)
        int32_t var_28_1 = eax_3
        
        while (edi_1 != ebx_1)
            int32_t* edx_1 = *edi_1
            eax_3.b = edx_1 == eax_3
            void* ecx = *edx_1
            
            if (ecx != 0)
                edx_1[5].b = eax_3.b
                *(ecx + 0x18) = eax_3.b
            
            void** eax_4 = *(esi + 0x28)
            void** esi_1 = eax_4
            void** ecx_1 = eax_4[1]
            
            while (*(ecx_1 + 0xd) == 0)
                if (ecx_1[4] u>= edx_1)
                    esi_1 = ecx_1
                    ecx_1 = *ecx_1
                else
                    ecx_1 = ecx_1[2]
            
            if (esi_1 == eax_4 || edx_1 u< esi_1[4])
                esi_1 = eax_4
            
            if (esi_1 != *(var_14 + 0x28))
                int32_t edx_2 = arg3[6].d
                int32_t eax_6 = *(arg3 + 0x64)
                int32_t var_18_1 = eax_6
                
                if (*(arg3 + 0x58) != 0 || *(arg3 + 0x5c) != 0 || edx_2 != 0 || eax_6 != 0)
                    eax_6.b = 1
                else
                    eax_6.b = 0
                
                if (eax_6.b == 0)
                    void var_1c4
                    int128_t* eax_11 = sub_526a90(&var_1c4, arg3)
                    int32_t var_8_3 = 2
                    *(eax_11 + 0x58) = esi_1[7]
                    *(eax_11 + 0x5c) = esi_1[8]
                    eax_11[6].d = esi_1[0xa]
                    *(eax_11 + 0x64) = esi_1[0xb]
                    int128_t* var_1d8_6 = eax_11
                    sub_54e2e0(edx_1)
                    int32_t var_8_4 = 0xffffffff
                    ___dyn_tls_init@12(&var_1c4)
                else
                    int32_t eax_8 = esi_1[7] + *(arg3 + 0x58)
                    int32_t esi_3 = esi_1[8] + *(arg3 + 0x5c)
                    int32_t var_3c_1 = eax_8
                    struct common::CPoint::VTable* const var_40_1 = &common::CPoint::`vftable'
                    int32_t var_38_1 = esi_3
                    struct common::CSize::VTable* const var_34_1 = &common::CSize::`vftable'
                    int32_t var_30_1 = edx_2
                    int32_t var_2c_1 = var_18_1
                    struct common::CRect::VTable* const var_44_1 = &common::CRect::`vftable'
                    int32_t var_8_1 = 0
                    void var_104
                    int128_t* eax_10 = sub_526a90(&var_104, arg3)
                    var_8_1.b = 1
                    *(eax_10 + 0x58) = eax_8
                    eax_10[6].d = edx_2
                    *(eax_10 + 0x64) = var_18_1
                    int128_t* var_1d8_4 = eax_10
                    *(eax_10 + 0x5c) = esi_3
                    sub_54e2e0(edx_1)
                    ___dyn_tls_init@12(&var_104)
                    int32_t var_8_2 = 0xffffffff
            else
                int128_t* var_1d8_2 = arg3
                sub_54e2e0(edx_1)
            
            esi = var_14
            edi_1 = &edi_1[1]
            eax_3 = var_28_1
        
        result = arg2
        *(esi + 0x34) = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
