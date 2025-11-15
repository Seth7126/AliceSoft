// 函数: ?_Reset@_TaskCollection@details@Concurrency@@AAEXPAV123@@Z
// 地址: 0x6f4dbc
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* i = arg2
void* esi = arg1

while (true)
    void* eax_1 = sub_6f09b1()
    int32_t ecx = *(esi + 0xc)
    void* var_8_1 = eax_1
    int32_t var_c_1 = ecx
label_6f4ddb:
    int32_t edx_1 = *(esi + 0x38)
    
    while (true)
        if (edx_1 == 9)
            int32_t var_14_1 = 0
            int32_t (* var_10_1)() = sub_6eb74c
            
            if (*(esi + 0x38) != edx_1)
                goto label_6f4ddb
            
            do
                void var_1c
                Concurrency::details::_SpinWait<1>::_SpinOnce(&var_1c)
            while (*(esi + 0x38) == 9)
            
            eax_1 = var_8_1
            ecx = var_c_1
            goto label_6f4ddb
        
        int32_t eax_2
        
        if (eax_1 != ecx)
            eax_2 = 3
            
            if (3 == *(esi + 0x38))
                *(esi + 0x38) = 0
            else
                eax_2 = *(esi + 0x38)
            
            if (eax_2 == 9)
            label_6f4e5e:
                ecx = var_c_1
                edx_1 = eax_2
                eax_1 = var_8_1
                continue
        else
            eax_2 = edx_1
            
            if (eax_2 == *(esi + 0x38))
                *(esi + 0x38) = 0
            else
                eax_2 = *(esi + 0x38)
            
            if (eax_2 != edx_1)
                goto label_6f4e5e
            
            if (eax_2 == 4)
                Concurrency::details::ContextBase::CancelCollectionComplete(var_8_1, 
                    *(esi + 4) << 4 s>> 4)
            
            *(esi + 4) |= 0xfffffff
        struct _EXCEPTION_REGISTRATION_RECORD** result
        
        if (*(esi + 0x64) == esi)
            for (; i != 0; i = *(i + 0x68))
                if (((*(i + 0x78) u>> 1).b & 1) == 0)
                    Concurrency::details::_TaskCollection::_Reset(0)
            
            result = esi + 0x34
            struct _EXCEPTION_REGISTRATION_RECORD* temp0_1 = *result
            *result = nullptr
            
            if (temp0_1 s< 0)
                int32_t var_24
                void* var_24_1 = var_24 & i
                int32_t (* var_20_1)() = sub_6eb74c
                
                while (*(esi + 0x18) == 8)
                    void var_2c
                    Concurrency::details::_SpinWait<1>::_SpinOnce(&var_2c)
                
                return sub_6fc438(esi)
        else
            result = Concurrency::details::_TaskCollection::_IsDirectAlias(esi)
            
            if (result.b != 0 && i != 0)
                esi = *(esi + 0x64)
                break
        
        return result
