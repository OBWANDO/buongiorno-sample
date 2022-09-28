
#pragma once

#include <AzCore/Component/Component.h>

#include <Buongiorno/BuongiornoBus.h>

namespace Buongiorno
{
    class BuongiornoSystemComponent
        : public AZ::Component
        , protected BuongiornoRequestBus::Handler
    {
    public:
        AZ_COMPONENT(BuongiornoSystemComponent, "{c492b2f8-fb59-493d-9a70-8b6e62779656}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

        BuongiornoSystemComponent();
        ~BuongiornoSystemComponent();

    protected:
        ////////////////////////////////////////////////////////////////////////
        // BuongiornoRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
