<?php
/**
 * @file
 * humanitarianresponse_funding_data.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function humanitarianresponse_funding_data_uuid_default_entities() {
  $entities = array();

  $entities['funding'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/30e8e980-7f18-afe4-f136-b0fe6ec903f4',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'name' => 'Financial Tracking (FTS)',
    'name_field' => array(
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Financial Tracking (FTS)',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Suivi Financier (FTS)',
        ),
      ),
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Financial Tracking (FTS)',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'funding/financial-tracking',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'uid' => '1',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'uid' => '1',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '30e8e980-7f18-afe4-f136-b0fe6ec903f4',
    'vocabulary_machine_name' => 'funding',
    'weight' => '0',
  );
  $entities['funding'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/21e36383-ca64-56d4-3526-5fe3167acf7f',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'en' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'name' => 'Consolidated Appeal (CAP)',
    'name_field' => array(
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Consolidated Appeal (CAP)',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Appel Commun (CAP)',
        ),
      ),
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Consolidated Appeal (CAP)',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'funding/consolidated-appeal',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'uid' => '1',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'uid' => '1',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '21e36383-ca64-56d4-3526-5fe3167acf7f',
    'vocabulary_machine_name' => 'funding',
    'weight' => '0',
  );
  $entities['funding'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/07a9503c-e2df-cbb4-adcb-20f2ea0d1fe6',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'en' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => NULL,
          'value' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'filtered_html',
    'name' => 'Central Emergency Response Fund (CERF)',
    'name_field' => array(
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Central Emergency Response Fund (CERF)',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Fond Central de Réponse d\'Urgence (CERF)',
        ),
      ),
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Central Emergency Response Fund (CERF)',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'funding/central-emergency-response-fund-cerf',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'uid' => '1',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'uid' => '1',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '07a9503c-e2df-cbb4-adcb-20f2ea0d1fe6',
    'vocabulary_machine_name' => 'funding',
    'weight' => '0',
  );
  $entities['funding'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/807b5d74-39f8-3374-21e5-7046df0b80c1',
      'cause' => FALSE,
    ),
    'description' => NULL,
    'description_field' => array(),
    'format' => 'filtered_html',
    'name' => 'Pooled Fund',
    'name_field' => array(
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Pooled Fund',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Fond Commun',
        ),
      ),
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Pooled Fund',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'funding/pooled-fund',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'uid' => '1',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'uid' => '1',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '807b5d74-39f8-3374-21e5-7046df0b80c1',
    'vocabulary_machine_name' => 'funding',
    'weight' => '0',
  );

  return $entities;
}
