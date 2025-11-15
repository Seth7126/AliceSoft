// 函数: sub_6ea3a6
// 地址: 0x6ea3a6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x88
int32_t (* var_c)(void* arg1) = __ehhandler$___std_fs_copy_file@12
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_a8 = __security_cookie ^ &__saved_ebp
void* const var_ac_7 = &data_6ea3b5
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void* const var_ac
struct std::exception::VTable** eax

if (arg1 != 0)
    int32_t result
    
    if (arg2 == 0)
        result = 0
    label_6e8c89:
        fsbase->NtTib.ExceptionList = ExceptionList
        void* const __saved_ebp_2 = &data_6ea5d5
        return result
    
    uint32_t edi_1 = arg4
    
    if (arg2 != 1 || (edi_1 != 0 && edi_1 != 0xffffffff))
        int32_t eax_1 = 0
        
        if (arg2 != 0)
            do
                if (arg1[eax_1] == 0)
                    struct std::exception::VTable* var_64
                    std::length_error::length_error(&var_64, "pEvents")
                    var_ac = &data_7db524
                    eax = &var_64
                    goto label_6ea3d2
                
                eax_1 += 1
            while (eax_1 u< arg2)
        
        if (edi_1 == 0 || edi_1 == 0xffffffff)
            eax_1.b = 0
        else
            eax_1.b = 1
        
        char var_ac_2 = eax_1.b
        eax_1.b = edi_1 != 0xffffffff
        int32_t var_40
        sub_6e94ed(&var_40, arg3, arg2, eax_1.b, var_ac_2)
        int32_t var_8 = 0
        int32_t ecx_6 = 0
        char var_11_1 = 0
        int32_t var_1c_1 = 0
        int32_t var_3c
        int32_t var_34
        void* var_30
        int32_t var_2c
        
        if (arg2 != 0)
            do
                int32_t* eax_4 = arg1[ecx_6]
                void var_98
                sub_6ea792(&var_98, &eax_4[2])
                var_8.b = 1
                int32_t** eax_9 = var_3c * var_1c_1 + var_34 + var_40
                var_2c += 1
                int32_t* ecx_9 = *eax_4
                
                if (ecx_9 != 1)
                    *eax_9 = Concurrency::details::Sweep(ecx_9, 1)
                    *eax_4 = eax_9
                else
                    int32_t var_20
                    int32_t* var_ac_4 = &var_20
                    
                    if (arg3 == 0)
                        sub_6e99ac(eax_9, var_ac_4)
                        
                        if (var_20 != 0)
                            var_11_1 = 1
                        
                        int32_t var_24_2 = var_1c_1 + 1
                        
                        if (var_1c_1 + 1 u< arg2)
                            int32_t edi_2 = var_1c_1 + 1
                            
                            do
                                var_2c += 1
                                sub_6e99ac(var_3c * edi_2 + var_34 + var_40, &var_20)
                                edi_2 += 1
                            while (edi_2 u< arg2)
                            
                            edi_1 = arg4
                        
                        var_8.b = 0
                        Concurrency::reader_writer_lock::scoped_lock::~scoped_lock(&var_98)
                        break
                    
                    if (sub_6e99ac(eax_9, var_ac_4) != 0)
                        *eax_9 = Concurrency::details::Sweep(eax_4[1], 0)
                        eax_4[1] = eax_9
                    
                    if (var_20 != 0)
                        var_11_1 = 1
                
                var_8.b = 0
                Concurrency::reader_writer_lock::scoped_lock::~scoped_lock(&var_98)
                ecx_6 = var_1c_1 + 1
                var_1c_1 = ecx_6
            while (ecx_6 u< arg2)
            
            if (var_11_1 != 0 || *(var_30 + 8) == 1)
                goto label_6ea5af
            
            goto label_6ea58c
        
        int32_t result_1
        
        if (*(var_30 + 8) == 1)
        label_6ea5af:
            result_1 = 0xffffffff
        label_6ea5b2:
            int32_t eax_22 = *(var_30 + 0xc)
            
            if (eax_22 != 0)
                result_1 = divu.dp.d(0:(eax_22 - var_34 - var_40), var_3c)
            
            Concurrency::details::MultiWaitBlockHolder::~MultiWaitBlockHolder(&var_40)
            result = result_1
            goto label_6e8c89
        
    label_6ea58c:
        int32_t var_ac_6 = 2
        int32_t eax_19 = 0
        
        if (0 == *(var_30 + 8))
            *(var_30 + 8) = 2
        else
            eax_19 = *(var_30 + 8)
        
        if (eax_19 == 1)
            goto label_6ea5af
        
        if (edi_1 == 0)
            int32_t eax_20 = *(var_30 + 0x14)
            *(var_30 + 0x14) += 1
            
            if (eax_20 != 0)
                sub_6eb772()
            else
                *(var_30 + 0xc) &= edi_1
                *(var_30 + 0x29) = 1
            
            goto label_6ea5af
        
        result_1 = 0xffffffff
        
        if (edi_1 == 0xffffffff || *(var_30 + 0x14) != 0)
            goto label_6ea65a
        
        int32_t eax_26
        int32_t edx_4
        eax_26, edx_4 = j_Concurrency::details::ResourceManager::Version()
        
        if (eax_26 s< 3)
            if (Concurrency::details::platform::__CreateTimerQueueTimer(var_30 + 0x10, 
                Concurrency::details::GetSharedTimerQueue(), sub_6e984c, var_30, edi_1, 0, 
                WT_EXECUTEINTIMERTHREAD) != 0)
            label_6ea657:
                int32_t var_2c_1 = var_2c + 1
            label_6ea65a:
                sub_6eb772()
                goto label_6ea5b2
            
            struct std::exception::std::bad_alloc::VTable* var_7c
            std::bad_alloc::bad_alloc(&var_7c)
            var_ac = &data_7db4ec
            eax = &var_7c
        else
            int32_t eax_27 = Concurrency::details::RegisterAsyncTimerAndLoadLibrary(eax_26, edx_4, 
                &data_6ef6b9, edi_1, sub_6e97bb, var_30, 0)
            *(var_30 + 0x10) = eax_27
            
            if (eax_27 != 0)
                goto label_6ea657
            
            struct std::exception::std::bad_alloc::VTable* var_70
            std::bad_alloc::bad_alloc(&var_70)
            var_ac = &data_7db4ec
            eax = &var_70
    else
        int32_t* ecx_2 = *arg1
        
        if (ecx_2 != 0)
            result = Concurrency::event::wait(ecx_2, edi_1)
            goto label_6e8c89
        
        struct std::exception::VTable* var_58
        std::length_error::length_error(&var_58, "pEvents")
        var_ac = &data_7db524
        eax = &var_58
else
    struct std::exception::VTable* var_4c
    std::length_error::length_error(&var_4c, "pEvents")
    var_ac = &data_7db524
    eax = &var_4c

label_6ea3d2:
sub_70021b(eax, var_ac)
noreturn
