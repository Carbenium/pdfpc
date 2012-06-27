/* decoratable.c generated by valac 0.16.0, the Vala compiler
 * generated from decoratable.vala, do not modify */


#include <glib.h>
#include <glib-object.h>


#define ORG_WESTHOFFSWELT_PDFPRESENTER_VIEW_BEHAVIOUR_TYPE_DECORATABLE (org_westhoffswelt_pdfpresenter_view_behaviour_decoratable_get_type ())
#define ORG_WESTHOFFSWELT_PDFPRESENTER_VIEW_BEHAVIOUR_DECORATABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ORG_WESTHOFFSWELT_PDFPRESENTER_VIEW_BEHAVIOUR_TYPE_DECORATABLE, orgwesthoffsweltpdfpresenterViewBehaviourDecoratable))
#define ORG_WESTHOFFSWELT_PDFPRESENTER_VIEW_BEHAVIOUR_IS_DECORATABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ORG_WESTHOFFSWELT_PDFPRESENTER_VIEW_BEHAVIOUR_TYPE_DECORATABLE))
#define ORG_WESTHOFFSWELT_PDFPRESENTER_VIEW_BEHAVIOUR_DECORATABLE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ORG_WESTHOFFSWELT_PDFPRESENTER_VIEW_BEHAVIOUR_TYPE_DECORATABLE, orgwesthoffsweltpdfpresenterViewBehaviourDecoratableIface))

typedef struct _orgwesthoffsweltpdfpresenterViewBehaviourDecoratable orgwesthoffsweltpdfpresenterViewBehaviourDecoratable;
typedef struct _orgwesthoffsweltpdfpresenterViewBehaviourDecoratableIface orgwesthoffsweltpdfpresenterViewBehaviourDecoratableIface;

#define ORG_WESTHOFFSWELT_PDFPRESENTER_VIEW_BEHAVIOUR_TYPE_BASE (org_westhoffswelt_pdfpresenter_view_behaviour_base_get_type ())
#define ORG_WESTHOFFSWELT_PDFPRESENTER_VIEW_BEHAVIOUR_BASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ORG_WESTHOFFSWELT_PDFPRESENTER_VIEW_BEHAVIOUR_TYPE_BASE, orgwesthoffsweltpdfpresenterViewBehaviourBase))
#define ORG_WESTHOFFSWELT_PDFPRESENTER_VIEW_BEHAVIOUR_BASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ORG_WESTHOFFSWELT_PDFPRESENTER_VIEW_BEHAVIOUR_TYPE_BASE, orgwesthoffsweltpdfpresenterViewBehaviourBaseClass))
#define ORG_WESTHOFFSWELT_PDFPRESENTER_VIEW_BEHAVIOUR_IS_BASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ORG_WESTHOFFSWELT_PDFPRESENTER_VIEW_BEHAVIOUR_TYPE_BASE))
#define ORG_WESTHOFFSWELT_PDFPRESENTER_VIEW_BEHAVIOUR_IS_BASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ORG_WESTHOFFSWELT_PDFPRESENTER_VIEW_BEHAVIOUR_TYPE_BASE))
#define ORG_WESTHOFFSWELT_PDFPRESENTER_VIEW_BEHAVIOUR_BASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ORG_WESTHOFFSWELT_PDFPRESENTER_VIEW_BEHAVIOUR_TYPE_BASE, orgwesthoffsweltpdfpresenterViewBehaviourBaseClass))

typedef struct _orgwesthoffsweltpdfpresenterViewBehaviourBase orgwesthoffsweltpdfpresenterViewBehaviourBase;
typedef struct _orgwesthoffsweltpdfpresenterViewBehaviourBaseClass orgwesthoffsweltpdfpresenterViewBehaviourBaseClass;

struct _orgwesthoffsweltpdfpresenterViewBehaviourDecoratableIface {
	GTypeInterface parent_iface;
	void (*associate_behaviour) (orgwesthoffsweltpdfpresenterViewBehaviourDecoratable* self, orgwesthoffsweltpdfpresenterViewBehaviourBase* behaviour);
};



GType org_westhoffswelt_pdfpresenter_view_behaviour_base_get_type (void) G_GNUC_CONST;
GType org_westhoffswelt_pdfpresenter_view_behaviour_decoratable_get_type (void) G_GNUC_CONST;
void org_westhoffswelt_pdfpresenter_view_behaviour_decoratable_associate_behaviour (orgwesthoffsweltpdfpresenterViewBehaviourDecoratable* self, orgwesthoffsweltpdfpresenterViewBehaviourBase* behaviour);


/**
         * Associate a new Behaviour with this Decoratable
         *
         * The implementation needs to support an arbitrary amount of different
         * behaviours.
         */
void org_westhoffswelt_pdfpresenter_view_behaviour_decoratable_associate_behaviour (orgwesthoffsweltpdfpresenterViewBehaviourDecoratable* self, orgwesthoffsweltpdfpresenterViewBehaviourBase* behaviour) {
	g_return_if_fail (self != NULL);
	ORG_WESTHOFFSWELT_PDFPRESENTER_VIEW_BEHAVIOUR_DECORATABLE_GET_INTERFACE (self)->associate_behaviour (self, behaviour);
}


static void org_westhoffswelt_pdfpresenter_view_behaviour_decoratable_base_init (orgwesthoffsweltpdfpresenterViewBehaviourDecoratableIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
	}
}


/**
     * Every View which supports Behaviours needs to implement this interface.
     *
     * A Behaviour is a certain characteristic which is added to an existing
     * View on demand.
     */
GType org_westhoffswelt_pdfpresenter_view_behaviour_decoratable_get_type (void) {
	static volatile gsize org_westhoffswelt_pdfpresenter_view_behaviour_decoratable_type_id__volatile = 0;
	if (g_once_init_enter (&org_westhoffswelt_pdfpresenter_view_behaviour_decoratable_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (orgwesthoffsweltpdfpresenterViewBehaviourDecoratableIface), (GBaseInitFunc) org_westhoffswelt_pdfpresenter_view_behaviour_decoratable_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType org_westhoffswelt_pdfpresenter_view_behaviour_decoratable_type_id;
		org_westhoffswelt_pdfpresenter_view_behaviour_decoratable_type_id = g_type_register_static (G_TYPE_INTERFACE, "orgwesthoffsweltpdfpresenterViewBehaviourDecoratable", &g_define_type_info, 0);
		g_once_init_leave (&org_westhoffswelt_pdfpresenter_view_behaviour_decoratable_type_id__volatile, org_westhoffswelt_pdfpresenter_view_behaviour_decoratable_type_id);
	}
	return org_westhoffswelt_pdfpresenter_view_behaviour_decoratable_type_id__volatile;
}


