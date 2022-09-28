
#include <AzCore/Serialization/SerializeContext.h>
#include <AzCore/Serialization/EditContext.h>
#include <AzCore/Serialization/EditContextConstants.inl>

#include "BuongiornoSystemComponent.h"

namespace Buongiorno
{
    void BuongiornoSystemComponent::Reflect(AZ::ReflectContext* context)
    {
        if (AZ::SerializeContext* serialize = azrtti_cast<AZ::SerializeContext*>(context))
        {
            serialize->Class<BuongiornoSystemComponent, AZ::Component>()
                ->Version(0)
                ;

            if (AZ::EditContext* ec = serialize->GetEditContext())
            {
                ec->Class<BuongiornoSystemComponent>("Buongiorno", "[Description of functionality provided by this System Component]")
                    ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                        ->Attribute(AZ::Edit::Attributes::AppearsInAddComponentMenu, AZ_CRC("System"))
                        ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ;
            }
        }
    }

    void BuongiornoSystemComponent::GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided)
    {
        provided.push_back(AZ_CRC("BuongiornoService"));
    }

    void BuongiornoSystemComponent::GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible)
    {
        incompatible.push_back(AZ_CRC("BuongiornoService"));
    }

    void BuongiornoSystemComponent::GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required)
    {
        AZ_UNUSED(required);
    }

    void BuongiornoSystemComponent::GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent)
    {
        AZ_UNUSED(dependent);
    }
    
    BuongiornoSystemComponent::BuongiornoSystemComponent()
    {
        if (BuongiornoInterface::Get() == nullptr)
        {
            BuongiornoInterface::Register(this);
        }
    }

    BuongiornoSystemComponent::~BuongiornoSystemComponent()
    {
        if (BuongiornoInterface::Get() == this)
        {
            BuongiornoInterface::Unregister(this);
        }
    }

    void BuongiornoSystemComponent::Init()
    {
    }

    void BuongiornoSystemComponent::Activate()
    {
        BuongiornoRequestBus::Handler::BusConnect();
    }

    void BuongiornoSystemComponent::Deactivate()
    {
        BuongiornoRequestBus::Handler::BusDisconnect();
    }
}
