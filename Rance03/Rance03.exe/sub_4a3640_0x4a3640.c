// 函数: sub_4a3640
// 地址: 0x4a3640
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_13 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc679
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x5c)
struct IInterface::partsengine::CGUIView::VTable** ebp = arg3
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx != 0)
    int32_t eax_4 = (*(*ecx + 0xc))(eax_2)
    result = (*(**(arg1 + 0x5c) + 8))(ebp)
    bool cond:0_1
    
    if (arg2 s> 0xa)
        cond:0_1 = result == arg2
    else
        cond:0_1 = eax_4 == arg2
    
    result.b = cond:0_1

if (ecx == 0 || result.b == 0)
    int32_t* ecx_2 = *(arg1 + 0x5c)
    
    if (ecx_2 == 0 || arg2 s< 0xa)
    label_4a36b6:
        int32_t* ecx_3 = *(arg1 + 0x5c)
        
        if (ecx_3 != 0)
            (*(*ecx_3 + 4))(eax_2)
            *(arg1 + 0x5c) = 0
        
        int32_t var_4_12
        
        if (arg2 u<= 9)
            switch (arg2)
                case nullptr
                    struct IInterface::partsengine::CGUIView::VTable** eax_8 = sub_69adc6(0x214)
                    arg3 = eax_8
                    int32_t var_4 = 0
                    
                    if (eax_8 == 0)
                        goto label_4a390a
                    
                    void* var_28_2 = arg1
                    var_4_12 = 0xffffffff
                    *(arg1 + 0x5c) = sub_497e50(eax_8, *(arg1 + 0x68), *(arg1 + 0x60))
                case 1
                    struct IInterface::partsengine::CGUIView::VTable** eax_10 = sub_69adc6(0x298)
                    arg3 = eax_10
                    int32_t var_4_1 = 1
                    
                    if (eax_10 == 0)
                        goto label_4a390a
                    
                    void* var_28_3 = arg1
                    var_4_12 = 0xffffffff
                    *(arg1 + 0x5c) = sub_49c310(eax_10, *(arg1 + 0x68), *(arg1 + 0x60))
                case 2
                    struct IInterface::partsengine::CGUIView::VTable** eax_11 = sub_69adc6(0x2d8)
                    arg3 = eax_11
                    int32_t var_4_2 = 2
                    
                    if (eax_11 == 0)
                        goto label_4a390a
                    
                    void* var_28_4 = arg1
                    var_4_12 = 0xffffffff
                    *(arg1 + 0x5c) = sub_4e0cf0(eax_11, *(arg1 + 0x68), *(arg1 + 0x60))
                case 3
                    struct IInterface::partsengine::CGUIView::VTable** eax_12 = sub_69adc6(0x2d8)
                    arg3 = eax_12
                    int32_t var_4_3 = 3
                    struct IInterface::partsengine::CGUIView::VTable** eax_13
                    
                    if (eax_12 == 0)
                        eax_13 = nullptr
                    else
                        void* var_28_5 = arg1
                        eax_13 = sub_4e0cf0(eax_12, *(arg1 + 0x68), *(arg1 + 0x60))
                    
                    int32_t var_4_4 = 0xffffffff
                    *(arg1 + 0x5c) = eax_13
                    sub_4e13d0(eax_13)
                case 4
                    struct IInterface::partsengine::CGUIView::VTable** eax_14 = sub_69adc6(0x1c4)
                    arg3 = eax_14
                    int32_t var_4_5 = 4
                    
                    if (eax_14 == 0)
                        goto label_4a390a
                    
                    void* var_28_6 = arg1
                    var_4_12 = 0xffffffff
                    *(arg1 + 0x5c) = sub_4dd2f0(eax_14, *(arg1 + 0x68), *(arg1 + 0x60))
                case 5
                    struct IInterface::partsengine::CGUIView::VTable** eax_15 = sub_69adc6(0x190)
                    arg3 = eax_15
                    int32_t var_4_6 = 5
                    
                    if (eax_15 == 0)
                        goto label_4a390a
                    
                    void* var_28_7 = arg1
                    var_4_12 = 0xffffffff
                    *(arg1 + 0x5c) = sub_4b26e0(eax_15, *(arg1 + 0x68), *(arg1 + 0x60))
                case 6
                    struct IInterface::partsengine::CGUIView::VTable** eax_16 = sub_69adc6(0x1b8)
                    arg3 = eax_16
                    int32_t var_4_7 = 6
                    
                    if (eax_16 == 0)
                        goto label_4a390a
                    
                    void* var_28_8 = arg1
                    var_4_12 = 0xffffffff
                    *(arg1 + 0x5c) = sub_49ff70(eax_16, *(arg1 + 0x68), *(arg1 + 0x60))
                case 7
                    struct IInterface::partsengine::CGUIView::VTable** eax_17 = sub_69adc6(0x218)
                    arg3 = eax_17
                    int32_t var_4_8 = 7
                    
                    if (eax_17 == 0)
                        goto label_4a390a
                    
                    void* var_28_9 = arg1
                    var_4_12 = 0xffffffff
                    *(arg1 + 0x5c) = sub_4c4910(eax_17, *(arg1 + 0x68), *(arg1 + 0x60))
                case 8
                    struct IInterface::partsengine::CGUIView::VTable** eax_18
                    int32_t ecx_13
                    eax_18, ecx_13 = sub_69adc6(0x6c)
                    arg3 = eax_18
                    int32_t var_4_9 = 8
                    
                    if (eax_18 == 0)
                        goto label_4a390a
                    
                    void* var_28_10 = arg1
                    int32_t var_2c_9 = *(arg1 + 0x60)
                    var_4_12 = 0xffffffff
                    *(arg1 + 0x5c) = sub_4add00(eax_18, ecx_13)
                case 9
                    struct IInterface::partsengine::CGUIView::VTable** eax_19
                    int32_t ecx_15
                    eax_19, ecx_15 = sub_69adc6(0x54)
                    arg3 = eax_19
                    int32_t var_4_10 = 9
                    
                    if (eax_19 == 0)
                        goto label_4a390a
                    
                    void* var_28_11 = arg1
                    int32_t var_2c_10 = *(arg1 + 0x60)
                    var_4_12 = 0xffffffff
                    *(arg1 + 0x5c) = sub_4d4ac0(eax_19, ecx_15)
        else if (arg2 s>= 0xa)
            struct IInterface::partsengine::CGUIView::VTable** eax_20 = sub_69adc6(0x44)
            arg3 = eax_20
            int32_t var_4_11 = 0xa
            
            if (eax_20 == 0)
            label_4a390a:
                var_4_12 = 0xffffffff
                *(arg1 + 0x5c) = nullptr
            else
                void* var_28_12 = arg1
                var_4_12 = 0xffffffff
                *(arg1 + 0x5c) = sub_4d1390(eax_20, *(arg1 + 0x68), *(arg1 + 0x60))
        result = arg2 - 0xb
        
        if (result u<= 0xb)
            result = sub_510cf0(*(*(arg1 + 0x5c) + 0x34), arg2, ebp)
    else
        if ((*(*ecx_2 + 0xc))(eax_2) s< 0xa)
            goto label_4a36b6
        
        result = sub_510cf0(*(*(arg1 + 0x5c) + 0x34), arg2, ebp)

fsbase->NtTib.ExceptionList = ExceptionList
return result
