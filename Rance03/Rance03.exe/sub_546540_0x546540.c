// 函数: sub_546540
// 地址: 0x546540
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1

if (*(arg1 + 0x28) == 0)
    if (*(arg1 + 0x3c) != 0)
        int32_t edi_1 = *(arg1 + 0x24)
        
        if (sub_529d20(edi_1, arg3) == 0)
            return 0
        
        int32_t* var_18_2 = arg3
        
        if (sub_52a570(edi_1) == 0)
            return 0
        
        void* eax_2 = arg1 + 0x2c
        *(edi_1 + 0x10) = 1
        bool cond:2_1 = *(eax_2 + 0x14) u< 0x10
        *(eax_2 + 0x10) = 0
        
        if (not(cond:2_1))
            eax_2 = *eax_2
        
        *eax_2 = 0
    
    void* ecx_2 = *(arg1 + 0x24)
    
    if (ecx_2 == 0)
        goto label_5465d8
    
    if (sub_52a1b0(ecx_2, arg2 + 0x14, *(arg2 + 0x1cc)) == 0)
        sub_529c30(*(arg1 + 0x24))
        void* ecx_4 = *(arg1 + 0x68)
        *(arg1 + 0x24) = 0
        sub_53b520(ecx_4)
    label_5465d8:
        
        if (arg1 + 0x2c != arg2 + 0x14)
            sub_401ff0(arg1 + 0x2c, arg2 + 0x14, 0, 0xffffffff)
        
        bool cond:1_1 = *(arg1 + 0x60) == 0
        *(arg1 + 0x44) = *(arg2 + 0x1cc)
        *(arg1 + 0x28) = 1
        
        if (not(cond:1_1))
            struct 
                IWorkerThread::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable*
                * eax_6 = sub_69adc6(0x10)
            
            if (eax_6 == 0)
                int32_t var_18_5 = 0
                sub_5f4a10(*(arg1 + 0x5c))
                BOOL eax_8
                eax_8.b = 1
                return eax_8
            
            *eax_6 = &thread::CWorkerThread<class sealengine::CInstanceView, bool>::`vftable'{for `IWorkerThread'}
            eax_6[1] = 1
            eax_6[2] = arg1
            eax_6[3] = sub_546680
            struct 
                IWorkerThread::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable*
                * var_18_4 = eax_6
            sub_5f4a10(*(arg1 + 0x5c))
            BOOL eax_7
            eax_7.b = 1
            return eax_7
        
        if (sub_546680(arg1) == 0)
            return 0
        
        if (sub_529ce0(*(arg1 + 0x24), arg3) == 0)
            return 0
        
        sub_4026b0(arg1 + 0x2c)

return 1
