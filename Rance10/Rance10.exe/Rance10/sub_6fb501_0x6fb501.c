// 函数: sub_6fb501
// 地址: 0x6fb501
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

SLIST_HEADER* var_8 = arg1
SLIST_HEADER* var_c = arg1
int32_t edx_1 = arg3 s>> (arg1->__offset(0x2c).d).b
int32_t edi_2 = (arg1->__offset(0x28).d - 1) & arg3
uint32_t Alignment

if (edx_1 s< arg1->__offset(0x3c).d)
    int32_t ecx_1 = arg1->__offset(0x38).d
    int32_t eax = arg1->__offset(0x34).d
    int32_t* ebx_1
    
    if (edx_1 s< ecx_1)
        ebx_1 = *(eax + (edx_1 << 2))
    else
        ebx_1 = *(eax + (ecx_1 << 2) - 4)
        
        if (edx_1 - ecx_1 s>= 0)
            int32_t i_1 = edx_1 - ecx_1 + 1
            int32_t i
            
            do
                ebx_1 = ebx_1[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    uint32_t eax_2 = arg2
    int32_t* ecx_3 = *ebx_1 + (edi_2 << 2)
    
    if (eax_2 == *ecx_3)
        *ecx_3 = 0
    else
        eax_2 = *ecx_3
    
    if (eax_2 != arg2)
        Alignment.b = 0
    else
        if (0xfffffffe == ebx_1[2])
            ebx_1[2] = edi_2
        else
            ebx_1[2]
        
        if (arg4 != 0)
            if (zx.d(QueryDepthSList(arg1)) s<= arg1->__offset(0x44).d)
                InterlockedPushEntrySList(arg1, arg2 + 4)
            else
                InterlockedPushEntrySList(&arg1[1], arg2 + 4)
                
                if (zx.d(QueryDepthSList(&arg1[1])) s> arg1->__offset(0x44).d &&
                        Concurrency::details::SchedulerBase::HasCompletedShutdown(arg1->
                        __offset(0x24).d).b == 0)
                    Alignment = 0
                    
                    if (0 == arg1[9].Alignment.d)
                        arg1[9].Alignment.d = 1
                    else
                        Alignment = arg1[9].Alignment.d
                    
                    if (Alignment == 0)
                        SLIST_ENTRY* eax_8 = InterlockedFlushSList(&arg1[1])
                        void* var_1c_5 = arg1->__offset(0x24).d
                        arg1->__offset(0x10).d = eax_8
                        sub_6f1a81(arg1 + 0x14, sub_6fadec, arg1, var_1c_5)
        
        Alignment.b = 1
else
    Alignment.b = 0

return Alignment
