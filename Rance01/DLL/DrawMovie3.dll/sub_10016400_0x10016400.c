// 函数: sub_10016400
// 地址: 0x10016400
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_10019709
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_224
int32_t eax_2 = __security_cookie ^ &var_224
int32_t __saved_esi
int32_t var_22c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_10016240(&data_10021498)
enum MESSAGEBOX_RESULT result

if (data_100214bc != 0)
    if (CoCreateInstance(&data_1001bc20, 0, 0x3, &data_1001bd80, &data_100214a8) s>= 0)
        int32_t* eax_6 = data_100214a8
        
        if ((**eax_6)(eax_6, 0x1001bc80, &data_100214ac) s>= 0)
            var_224 = 0
            void* eax_8 = sub_10001dc9(0x188)
            void* var_220_1 = eax_8
            int32_t var_4 = 0
            struct CBaseVideoRenderer::CSurfaceRenderer::VTable** eax_9
            
            if (eax_8 == 0)
                eax_9 = nullptr
            else
                eax_9 = sub_10016af0(eax_8, &var_224)
            
            int32_t var_4_1 = 0xffffffff
            data_100214b4 = eax_9
            
            if (eax_9 != 0)
                eax_9[3]->__offset(0x4).d(&eax_9[3])
                int32_t eax_12 = data_100214b4
                int32_t eax_13
                
                if (eax_12 == 0)
                    eax_13 = 0
                else
                    eax_13 = eax_12 + 0xc
                
                int32_t* ecx_2 = data_100214a8
                
                if ((*(*ecx_2 + 0xc))(ecx_2, eax_13, u"SurfaceRenderer") s>= 0)
                    if (sub_100161f0() != 0)
                        wchar16 wideCharStr = 0
                        char var_21a[0x20a]
                        sub_10003d40(&var_21a, 0, 0x208)
                        uint8_t* lpMultiByteStr
                        
                        if (*(arg1 + 0x18) u< 0x10)
                            lpMultiByteStr = arg1 + 4
                        else
                            lpMultiByteStr = *(arg1 + 4)
                        
                        if (MultiByteToWideChar(0, 0, lpMultiByteStr, 0xffffffff, &wideCharStr, 
                                0x104) == 0)
                            result.b = 0
                        else
                            int32_t* eax_17 = data_100214a8
                            
                            if ((*(*eax_17 + 0x34))(eax_17, &wideCharStr, 0) s>= 0)
                                int32_t eax_20 = (**data_100214bc)(&data_1001c430)
                                data_100214b8 = eax_20
                                
                                if (eax_20 != 0)
                                    result = (**data_100214bc)(0x1001c440)
                                    data_100214a4 = result
                                    
                                    if (result != 0)
                                        data_100214c4 = 0xffffffff
                                        result.b = 1
                                    else
                                        sub_10015fa0("IWindowActiveState")
                                        result.b = 0
                                else
                                    sub_10015fa0("IVolumeValancer")
                                    result.b = 0
                            else
                                sub_10015fa0(0x1001c560)
                                result.b = 0
                    else
                        sub_10015fa0("IBasicAudio")
                        result.b = 0
                else
                    sub_10015fa0(0x1001c514)
                    result.b = 0
            else
                sub_10015fa0(0x1001c4cc)
                result.b = 0
        else
            sub_10015fa0("IMediaControl")
            result.b = 0
    else
        sub_10015fa0("IGraphBuilder")
        result.b = 0
else
    sub_10015fa0("IMainSystem")
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_10001d19(eax_2 ^ &var_224)
return result
