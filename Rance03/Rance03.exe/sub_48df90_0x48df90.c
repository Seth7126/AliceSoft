// 函数: sub_48df90
// 地址: 0x48df90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bb06b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
bool var_bc
int32_t eax_2 = __security_cookie ^ &var_bc
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result = arg8
struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result

if (arg1[4] != 0)
    void* ecx = arg1[5]
    
    if (ecx != 0)
        bool cond:1_1 = result != 0
        result = arg7
        var_bc = cond:1_1
        
        if (arg1[0xc] != result)
            arg1[0xc] = result
        
        arg1[0xb] = arg2
        
        if (*(ecx + 8) != 3)
        label_48e1e4:
            void* ecx_16 = arg1[7]
            
            if (ecx_16 == 0 || arg1[0xa].b == 0)
                int32_t* ecx_17 = arg1[8]
                
                if (ecx_17 == 0 || *(arg1 + 0x29) == 0)
                    int32_t* ecx_18 = arg1[9]
                    
                    if (ecx_18 != 0 && *(arg1 + 0x2a) != 0)
                        result = (*(*ecx_18 + 4))(eax_4)
                        arg1[9] = 0
                else
                    result = (*(*ecx_17 + 4))(eax_4)
                    arg1[8] = 0
            else
                void* var_d0_15 = ecx_16
                result = sub_48f820(ecx_16)
        else
            void* edx_2 = arg2 - *(ecx + 0x3c)
            
            if (arg2 - *(ecx + 0x3c) s< 0)
                goto label_48e1e4
            
            result = (*(ecx + 0x48) - *(ecx + 0x44)) s>> 2
            
            if (result s<= edx_2)
                goto label_48e1e4
            
            result = *(ecx + 0x44)
            void* ebx_1 = result[edx_2]
            
            if (ebx_1 == 0)
                goto label_48e1e4
            
            struct partsengine::CFlatKeyDataGraphicMatrix::VTable* var_a8
            
            if (arg1[7] != 0 && arg1[0xa].b != 0 && var_bc != 0)
                sub_48a850(&var_a8, result_1)
                sub_48d740(&var_a8, ebx_1)
                int32_t eax_7
                
                if (arg1[0xc] != 0)
                    eax_7 = *(arg1[5] + 0x3c)
                else
                    eax_7 = 0
                
                result = sub_48f2b0(arg1[7], arg2 - eax_7, arg3.b, arg4, &var_a8)
            else if (*(arg1 + 0x29) != 0)
                if (arg1[8] == 0)
                    struct IInterface::partsengine::CFlatLayerView::VTable** eax_9 =
                        sub_69adc6(0x50)
                    struct IInterface::partsengine::CFlatLayerView::VTable** eax_10
                    
                    if (eax_9 == 0)
                        eax_10 = nullptr
                    else
                        eax_10 = sub_490010(eax_9, arg1[2], arg1[3], arg1[6])
                    
                    void* ecx_5 = arg1[4]
                    arg1[8] = eax_10
                    int32_t* eax_13 = sub_4877d0(ecx_5, arg1[5] + 0x24)
                    sub_490420(arg1[8], arg1[4], eax_13)
                
                struct _EXCEPTION_REGISTRATION_RECORD** eax_14 = nullptr
                
                if (var_bc != 0)
                    sub_48a850(&var_a8, result_1)
                    sub_48d740(&var_a8, ebx_1)
                    eax_14 = &var_a8
                    var_a8 = &partsengine::CFlatKeyDataGraphicMatrix::`vftable'
                
                if (arg6 == 0)
                    arg1[8]
                    result = sub_4907d0(arg3, arg4, arg1, eax_14)
                else
                    struct _EXCEPTION_REGISTRATION_RECORD** var_b4 = nullptr
                    int32_t var_b0_1 = 0
                    int32_t var_ac_1 = 0
                    int32_t var_c_1 = 0
                    sub_4908d0(arg1[8], arg3, arg4, arg5, arg1, &var_b4, 0, eax_14)
                    int32_t var_c_2 = 0xffffffff
                    result = sub_403510(&var_b4)
            else if (*(arg1 + 0x2a) != 0)
                if (arg1[9] == 0)
                    struct partsengine::IFlatGraphicLayer::partsengine::CFlatEmitterView::VTable** 
                        eax_15 = sub_69adc6(0x4c)
                    struct partsengine::IFlatGraphicLayer::partsengine::CFlatEmitterView::VTable** 
                        eax_16
                    
                    if (eax_15 == 0)
                        eax_16 = nullptr
                    else
                        eax_16 = sub_489060(eax_15, arg1[2], arg1[3], arg1[6])
                    
                    void* ecx_13 = arg1[4]
                    arg1[9] = eax_16
                    int32_t* eax_19 = sub_487950(ecx_13, arg1[5] + 0x24)
                    sub_489570(arg1[9], arg1[4], eax_19)
                
                result = sub_489f50(arg1[9], arg2, arg3.b, arg4, arg6, (var_bc.d).b, arg1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_bc)
return result
