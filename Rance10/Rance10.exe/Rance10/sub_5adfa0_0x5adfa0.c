// 函数: sub_5adfa0
// 地址: 0x5adfa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f19c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *(arg1 + 0x564)
struct sealengine::CDrawInstance::sealengine::CMotionObject::VTable** var_4c = arg3
*(arg1 + 0x564) = 0

if (esi != 0)
    sub_586a00(esi)
    int32_t var_68_1 = 0x24
    operator new(esi)

int32_t* ecx_1 = *(arg1 + 0x55c)
*(arg1 + 0x55c) = 0

if (ecx_1 != 0)
    int32_t var_8_1 = 0
    (*(*ecx_1 + 0x1c))(1)
    int32_t var_8_2 = 0xffffffff

sub_5acbb0(arg1)
int32_t result

if (arg2 s< 0)
    result.b = 0
else
    struct sealengine::CDrawInstance::sealengine::CMotionObject::VTable** esi_1 = var_4c
    int32_t eax_7
    int32_t edx_1
    edx_1:eax_7 = muls.dp.d(0x4da637d, esi_1[2] - esi_1[1])
    int32_t edx_2 = edx_1 s>> 4
    
    if (arg2 s>= (edx_2 u>> 0x1f) + edx_2)
        result.b = 0
    else
        int32_t eax_10 = arg2 * 0x34c
        result = eax_10 + esi_1[1]
        bool cond:0_1 = eax_10 == neg.d(esi_1[1])
        int32_t result_1 = result
        
        if (cond:0_1)
            result.b = 0
        else if (*(result + 0x23c) != 0)
            char var_2c
            char* eax_11 = sub_404f20(&var_2c, &esi_1[8])
            int32_t var_8_3 = 1
            void* var_44
            sub_417750(eax_11, eax_11, &var_44, result + 0x22c)
            var_8_3.b = 3
            int32_t var_18
            
            if (var_18 u>= 0x10)
                sub_403160(var_2c.d, var_18 + 1, 1)
            
            int32_t var_68_3 = 1
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            int32_t ecx_7 = *(arg1 + 0x584)
            var_2c = 0
            int32_t var_50
            sub_5688b0(arg1 + 0x504, sub_5cc120(ecx_7, &var_50, &var_44))
            sub_568430(&var_50)
            __Smtx_lock_shared(arg1 + 0x508)
            int32_t esi_2 = *(arg1 + 0x504)
            __Smtx_unlock_shared(arg1 + 0x508)
            void* ebx
            
            if (esi_2 == 0)
                ebx.b = 0
            else
                __Smtx_lock_shared(arg1 + 0x508)
                void* edi_3 = *(arg1 + 0x504)
                __Smtx_unlock_shared(arg1 + 0x508)
                
                if (sub_5d8f00(arg1 + 0x50c, edi_3, *(arg1 + 0x584)).b == 0)
                    ebx.b = 0
                else
                    std::basic_ios<uint16_t,struct std::char_traits<uint16_t> >::`scalar deleting destructor'(
                        arg1 + 0x55c, sub_589b70(&var_4c, arg1 + 0x584))
                    struct sealengine::CDrawInstance::sealengine::CMotionObject::VTable** ecx_13 =
                        var_4c
                    
                    if (ecx_13 != 0)
                        var_8_3.b = 4
                        (*ecx_13)->vFunc_7(1)
                        var_8_3.b = 3
                    
                    if (sub_5959a0(*(arg1 + 0x55c), arg1 + 0x504, 0, arg4) != 0)
                        result = sub_595160(sub_431af0(arg1 + 0x504) + 0x38, result_1 + 0x244)
                        *(arg1 + 0x560) = result
                        
                        if (result != 0)
                            sub_586690(arg1 + 0x564, sub_586b60(&result_1, arg1 + 0x584))
                            sub_586670(&result_1)
                            
                            if (sub_58fde0(*(arg1 + 0x564), &var_44, *(arg1 + 0x560) + 0x18).b == 0)
                                sub_586640(arg1 + 0x564, 0)
                                *(arg1 + 0x560) = 0
                        
                        ebx.b = 1
                    else
                        std::_Distance2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > >,uint32_t>(
                            arg1 + 0x55c, 0)
                        ebx.b = 0
            
            int32_t var_30
            
            if (var_30 u>= 0x10)
                sub_403160(var_44, var_30 + 1, 1)
            
            result.b = ebx.b
        else
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
