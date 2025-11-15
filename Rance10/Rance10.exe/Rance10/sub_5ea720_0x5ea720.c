// 函数: sub_5ea720
// 地址: 0x5ea720
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741a28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 s>= 0)
    void* edi_1 = data_7fd4cc
    
    if (arg3 s< (*(edi_1 + 0x58) - *(edi_1 + 0x54)) s>> 3)
        int32_t edi_2 = *(edi_1 + 0x54)
        void* esi_2 = (arg3 << 3) + 4 + edi_2
        __Smtx_lock_shared(esi_2)
        void* edi_3 = *(edi_2 + (arg3 << 3))
        __Smtx_unlock_shared(esi_2)
        
        if (edi_3 != 0)
            void* var_20 = nullptr
            int32_t var_1c = 0
            int32_t var_18 = 0
            int32_t var_8_1 = 0
            void* var_2c
            sub_5f0520(&var_20, sub_5644e0(edi_3 + 0x1ac, &var_2c))
            void* esi_3 = var_2c
            int32_t var_24
            
            if (esi_3 != 0)
                sub_403160(esi_3, (var_24 - esi_3) s/ 0xc, 0xc)
            void* edi_4 = var_20
            int32_t ebx
            
            if (edi_4 != var_1c)
                ebx = (var_1c - edi_4) s/ 0xc
                
                if ((*(*arg2 + 0x40))(ebx) != 0)
                    if ((*(*arg4 + 0x40))(ebx) != 0)
                        if ((*(*arg5 + 0x40))(ebx) != 0)
                            int32_t esi_4 = 0
                            
                            if (ebx s<= 0)
                            label_5ea8c5:
                                ebx.b = 1
                            else
                                void* edi_5 = edi_4 + 8
                                
                                while (true)
                                    int32_t* var_40_7 = arg2
                                    
                                    if ((*(*arg2 + 0x30))(esi_4, *(edi_5 - 8)) == 0)
                                        break
                                    
                                    int32_t* var_40_9 = arg4
                                    
                                    if ((*(*arg4 + 0x30))(esi_4, *(edi_5 - 4)) == 0)
                                        break
                                    
                                    int32_t* var_40_11 = arg5
                                    
                                    if ((*(*arg5 + 0x30))(esi_4, *edi_5) == 0)
                                        break
                                    
                                    esi_4 += 1
                                    edi_5 += 0xc
                                    
                                    if (esi_4 s>= ebx)
                                        goto label_5ea8c5_1
                                
                                ebx.b = 0
                        else
                            ebx.b = 0
                    else
                        ebx.b = 0
                else
                    ebx.b = 0
            else
                (*(*arg2 + 0x48))(eax_2)
                (*(*arg4 + 0x48))()
                (*(*arg5 + 0x48))()
            label_5ea8c5_1:
                ebx.b = 1
            
            void* esi_5 = var_20
            
            if (esi_5 != 0)
                sub_403160(esi_5, (var_18 - esi_5) s/ 0xc, 0xc)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return ebx.b

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
