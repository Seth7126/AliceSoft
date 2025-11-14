// 函数: sub_67e0b0
// 地址: 0x67e0b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0cbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t eax_2 = __security_cookie ^ &var_60
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edx = arg1
void* var_5c = edx
int32_t ebp = 0
int32_t result = arg2 - 1
int32_t var_44 = 0
int32_t result_2 = result

if (arg2 != 1)
    int32_t eax_7 = arg3 - 1
    int32_t var_40_1 = eax_7
    
    while (true)
        struct dpparts::CWindow::VTable*** ebx_1 = nullptr
        int32_t esi_1 = 0
        int32_t result_1 = 0
        struct dpparts::CWindow::VTable*** var_54_1 = nullptr
        int32_t var_50_1 = 0
        int32_t ecx = 0
        int32_t var_4 = 0
        int32_t var_4c_1 = 0
        
        if (eax_7 != 0)
            void** eax_8 = edx + 0x34
            int32_t result_3 = result_1
            void** var_30_1 = eax_8
            
            do
                if (eax_8[5] u>= 0x10)
                    eax_8 = *eax_8
                
                int32_t var_78_1 = ecx
                int32_t var_7c_1 = ebp
                void** var_80_1 = eax_8
                int32_t* var_28
                sub_4691f0(&var_28, "%s_c_%d_%d")
                var_4.b = 1
                struct dpparts::CWindow::VTable** ebp_1 = sub_69adc6(0x7c)
                struct dpparts::CWindow::VTable** var_2c_1 = ebp_1
                var_4.b = 2
                int32_t var_94
                int32_t var_14
                
                if (ebp_1 == 0)
                    ebp_1 = nullptr
                else
                    int32_t* edi_2 = &var_28
                    
                    if (var_14 u>= 0x10)
                        edi_2 = var_28
                    
                    HCURSOR var_88_2 = LoadCursorA(nullptr, 0x7f00)
                    sub_680250(ebp_1, *(var_5c + 0x20), edi_2, var_94)
                    result_3 = result_1
                    *ebp_1 = &dpparts::CSplitWindowBorderCrossTuning::`vftable'{for `dpparts::CSplitWindowBorder'}
                
                int32_t* edx_2 = &var_28
                var_4.b = 1
                struct dpparts::CWindow::VTable** var_48 = ebp_1
                
                if (var_14 u>= 0x10)
                    edx_2 = var_28
                
                int32_t ecx_2 = *(var_5c + 0x24)
                var_94 = ecx_2 * var_4c_1
                sub_684fb0(ebp_1, edx_2, 0x54000000, ecx_2 * var_44, var_94, ecx_2, ecx_2, 
                    *(var_5c + 0x1c), nullptr, *(var_5c + 0x20))
                ebp_1[0x1c] = edx + 0x30
                ebp_1[0x1b] = edx + 0x32
                ebp_1[0x1d] = *(var_5c + 0x24)
                char edx_3 = *(var_5c + 0x4e)
                void* eax_19
                eax_19.b = *(var_5c + 0x4c)
                ebp_1[0x1e].b = eax_19.b
                *(ebp_1 + 0x79) = *(var_5c + 0x4d)
                *(ebp_1 + 0x7a) = edx_3
                
                if (&var_48 u>= ebx_1 || result_3 u> &var_48)
                    if (ebx_1 == esi_1 && (esi_1 - ebx_1) s>> 2 u< 1)
                        int32_t ebx_6 = (ebx_1 - result_3) s>> 2
                        
                        if (0x3fffffff - ebx_6 u< 1)
                            sub_69a551("vector<T> too long")
                            noreturn
                        
                        int32_t esi_6 = (esi_1 - result_3) s>> 2
                        uint32_t ecx_10 = esi_6 u>> 1
                        int32_t esi_7
                        
                        if (0x3fffffff - ecx_10 u>= esi_6)
                            esi_7 = esi_6 + ecx_10
                        else
                            esi_7 = 0
                        
                        if (esi_7 u< ebx_6 + 1)
                            esi_7 = ebx_6 + 1
                        
                        sub_412f90(&result_1, esi_7)
                        esi_1 = var_50_1
                        ebx_1 = var_54_1
                    
                    if (ebx_1 != 0)
                        *ebx_1 = ebp_1
                    
                    result_3 = result_1
                else
                    int32_t ebp_3 = (&var_48 - result_3) s>> 2
                    
                    if (ebx_1 == esi_1 && (esi_1 - ebx_1) s>> 2 u< 1)
                        int32_t ebx_3 = (ebx_1 - result_3) s>> 2
                        
                        if (0x3fffffff - ebx_3 u< 1)
                            sub_69a551("vector<T> too long")
                            noreturn
                        
                        int32_t esi_3 = (esi_1 - result_3) s>> 2
                        uint32_t ecx_7 = esi_3 u>> 1
                        int32_t esi_4
                        
                        if (0x3fffffff - ecx_7 u>= esi_3)
                            esi_4 = esi_3 + ecx_7
                        else
                            esi_4 = 0
                        
                        if (esi_4 u< ebx_3 + 1)
                            esi_4 = ebx_3 + 1
                        
                        sub_412f90(&result_1, esi_4)
                        esi_1 = var_50_1
                        ebx_1 = var_54_1
                        result_3 = result_1
                    
                    if (ebx_1 != 0)
                        *ebx_1 = *(result_3 + (ebp_3 << 2))
                
                ebx_1 = &ebx_1[1]
                var_4.b = 0
                var_54_1 = ebx_1
                
                if (var_14 u>= 0x10)
                    j__free(var_28)
                
                eax_8 = var_30_1
                ecx = var_4c_1 + 1
                ebp = var_44
                var_4c_1 = ecx
            while (ecx u< var_40_1)
            
            edx = var_5c
        
        sub_48c000(edx + 0x8c, &result_1)
        int32_t var_4_1 = 0xffffffff
        result = result_1
        
        if (result != 0)
            result = j__free(result)
            result_1 = 0
            int32_t var_54_2 = 0
            int32_t var_50_2 = 0
        
        ebp += 1
        var_44 = ebp
        
        if (ebp u>= result_2)
            break
        
        edx = var_5c
        eax_7 = var_40_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_60)
return result
