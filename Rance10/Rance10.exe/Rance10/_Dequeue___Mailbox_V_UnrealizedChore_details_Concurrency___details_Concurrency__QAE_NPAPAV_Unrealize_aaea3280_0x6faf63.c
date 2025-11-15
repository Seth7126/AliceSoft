// 函数: ?Dequeue@?$Mailbox@V_UnrealizedChore@details@Concurrency@@@details@Concurrency@@QAE_NPAPAV_UnrealizedChore@23@@Z
// 地址: 0x6faf63
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg1
int32_t* var_14 = ebx
int32_t* edx = &ebx[6]

while (true)
    int32_t* result_1 = *edx
    
    while (true)
        int32_t* result
        
        if (result_1 == ebx[7])
            result.b = 0
        else
            result = result_1
            
            if (result == *edx)
                *edx = result_1 + 1
            else
                result = *edx
            
            if (result == result_1)
                int32_t* ecx_2 = Concurrency::details::Mailbox<class Concurrency::details::_UnrealizedChore>::LocateMailboxSegment(
                    ebx, result_1, 0)
                void* eax_1 = &ebx[5]
                
                if (ecx_2 != *eax_1)
                    void** edx_1 = *eax_1
                    void** edi_1 = edx_1
                    
                    while (true)
                        ebx[3]
                        
                        if (edi_1[5] == neg.d(ebx[3]))
                            edi_1 = edi_1[6]
                        else
                            if (edi_1[4] u<= edx_1[4])
                                break
                            
                            void** eax_5 = edx_1
                            
                            if (eax_5 == *eax_1)
                                *eax_1 = edi_1
                            else
                                eax_5 = *eax_1
                            
                            ebx = var_14
                            void** var_c_1 = eax_5
                            
                            if (eax_5 == edx_1)
                                while (eax_5 != edi_1)
                                    Concurrency::details::Mailbox<class Concurrency::details::_UnrealizedChore>::Segment::SetDeletionReferences(
                                        eax_5, ebx[3])
                                    eax_5 = var_c_1[6]
                                    var_c_1 = eax_5
                                
                                break
                            
                            edi_1 = eax_5
                            edx_1 = eax_5
                
                void* esi_1 = result_1 - ecx_2[4]
                int32_t* var_1c = ecx_2
                void* var_18_1 = esi_1
                edx = &ebx[6]
                
                if (Concurrency::details::Mailbox<class Concurrency::details::InternalContextBase>::Slot::Claim(
                        &var_1c, arg2).b == 0)
                    break
                
                result.b = 1
            else
                result_1 = result
                continue
        
        return result
