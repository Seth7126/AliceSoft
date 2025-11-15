// 函数: sub_4d75c0
// 地址: 0x4d75c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734424
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4d7bd0(arg1 + 0x44, arg3)
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatKeyDataGraphic::VTable** 
    ebx = nullptr
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatKeyDataGraphic::VTable** 
    var_18 = nullptr
int32_t eax_3

if (arg4 s>= 0xf)
    if (arg3 s> 0)
        void* edx_1 = arg2
        int32_t var_14_2 = 0
        
        while (true)
            char* ecx_10 = *(edx_1 + 4)
            
            if (&ecx_10[4] u> *(edx_1 + 8))
                break
            
            int32_t edi_7 = ((zx.d(ecx_10[3]) << 8 | zx.d(ecx_10[2])) << 8 | zx.d(ecx_10[1])) << 8
                | zx.d(*ecx_10)
            *(edx_1 + 4) = &ecx_10[4]
            int32_t esi_3 = 0
            
            if (edi_7 s> 0)
                do
                    struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatKeyDataGraphic::VTable
                        ** eax_10 = sub_6e810c(0x80)
                    struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatKeyDataGraphic::VTable
                        ** var_24_1 = eax_10
                    int32_t var_8_3 = 1
                    void* eax_11 = sub_4db360(eax_10)
                    int32_t var_38_3 = arg4
                    int32_t var_8_4 = 0xffffffff
                    void* var_3c_2 = arg2
                    void* var_1c = eax_11
                    
                    if (sub_4db5d0(eax_11) == 0)
                        (*(*eax_11 + 4))(eax_2)
                        int32_t eax_15
                        eax_15.b = 0
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_15
                    
                    sub_428f00(*(arg1 + 0x44) + var_14_2, &var_1c)
                    esi_3 += 1
                while (esi_3 s< edi_7)
                
                ebx = var_18
                edx_1 = arg2
            
            var_14_2 += 0xc
            ebx += 1
            var_18 = ebx
            
            if (ebx s>= arg3)
                goto label_4d7662
        
    label_4d7680:
        eax_3.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_3
else if (arg3 s> 0)
    int32_t esi_1 = 0
    
    while (true)
        struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatKeyDataGraphic::VTable
            ** eax_4 = sub_6e810c(0x80)
        struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatKeyDataGraphic::VTable
            ** var_20_1 = eax_4
        int32_t var_8_1 = 0
        struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatKeyDataGraphic::VTable
            ** eax_5 = sub_4db360(eax_4)
        int32_t var_38_1 = arg4
        int32_t var_8_2 = 0xffffffff
        void* var_3c_1 = arg2
        var_18 = eax_5
        
        if (sub_4db5d0(eax_5) == 0)
            (*eax_5)->vFunc_1(eax_2)
            break
        
        sub_428f00(*(arg1 + 0x44) + esi_1, &var_18)
        ebx += 1
        esi_1 += 0xc
        
        if (ebx s>= arg3)
            goto label_4d7662
    
    goto label_4d7680

label_4d7662:
eax_3.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
